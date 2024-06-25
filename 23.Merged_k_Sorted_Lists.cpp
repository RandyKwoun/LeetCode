/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* Ans = nullptr;

        //If the lists vector is empty then return nullptr
        if(lists.empty())
            return Ans;

        bool bArr[lists.size()]; //To save the index where the list is empty
        
        //Fill the array to false(non-empty)
        for(size_t i = 0; i < lists.size(); i++)
            bArr[i] = false;
        
        Ans = new ListNode(INT_MAX); //Put the head node into Ans
        ListNode* temp = Ans; //To use Ans well
        
        while(true)
        {
            int iMin = INT_MAX; //To save the min value
            size_t iIndex = 0; //To save the index where the smallest value appeared
            
            // finding a smallest value
            for(size_t i = 0; i < lists.size(); i++)
            {
                if(bArr[i])
                    continue;
                
                //Checking if the list reached its end
                if(lists[i] == nullptr)
                {
                    bArr[i] = true;
                    continue;
                }
                
                //Saving the smallest value
                if(iMin >= lists[i]->val)
                {
                    iMin = lists[i]->val;
                    iIndex = i;
                }
            }
            
            bool bCheck = true; //To check if all the lists reached end

            //To check if all the lists reached end
            for(size_t i = 0; i < lists.size(); i++)
            {
                //if bArr[i] is false, it means it did NOT reach its end
                if(!bArr[i])
                {
                    bCheck = false;
                    break;
                }
            }
            
            //If we looked every elements, then break
            if(bCheck)
                break;
            
            //Saving the value into the Ans list
            ListNode* a = new ListNode(iMin);
            temp->next = a;
            temp = temp->next;
            
            //Moving the list
            lists[iIndex] = lists[iIndex]->next;
        }
        
        //Removing the head node
        temp = Ans->next;
        delete Ans;
        Ans = temp;
        
        return Ans;
    }
};
