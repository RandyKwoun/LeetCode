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
    ListNode* swapPairs(ListNode* head) {
        ListNode* Ans = nullptr; //To save the answer
        
        //If head is empty then return nullptr
        if(head == nullptr)
            return Ans;
            
        Ans = new ListNode(INT_MAX); //head node
        ListNode* temp = Ans; //To use Ans well
        vector<int> vValues; //To save the values
        
        //Calculate and swap
        while(true)
        {
            //If we already saved two values then swap
            if(vValues.size() >= 2)
            {
                ListNode* first = new ListNode(vValues.at(0));
                ListNode* second = new ListNode(vValues.at(1), first);
                temp->next = second;
                temp = temp->next->next;
                
                vValues.clear();
            }
            
            //If head list reached its end then break
            if(head == nullptr)
                break;
            
            //Push the value into the vector
            vValues.push_back(head->val);
            head = head->next;
        }
        
        //If the vector has more elemtents that did not swap
        if(!vValues.empty())
        {
            ListNode* a = new ListNode(vValues.at(0));
            temp->next = a;
        }
        
        //Delete the head node
        temp = Ans->next;
        delete Ans;
        Ans = temp;
        
        return Ans;
    }
};
