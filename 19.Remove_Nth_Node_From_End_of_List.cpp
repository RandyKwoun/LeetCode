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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* Ans = nullptr; //Save the answer here
        ListNode* temp = Ans; //To use Ans
        
        //Find the size of the linked list
        ListNode* lStart = head;
        size_t sSize = 0; //Length of the linked list
        
        while(head != nullptr)
        {
            head = head->next;
            sSize++;
        }
        
        head = lStart; 
        
        //Put the vlaues of head into Ans
        for(size_t i = 0; i < sSize; i++)
        {
            //If the value isn't suppose to delete
            if(i != sSize - n)
            {
                ListNode* a = new ListNode(head->val);
                
                if(Ans == nullptr)
                {
                    Ans = a;
                    temp = Ans;
                }
                
                else
                {
                    temp->next = a;
                    temp = temp->next;
                }
            }
            
            head = head->next;
        }

        return Ans;
    }
};
