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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* Ans = new ListNode(); //To save the values and return
        int iTen = 0; //To check if the value is greater than 10

        //First digit
        int iValue = l1->val + l2->val;
        iTen = iValue / 10;
        Ans->val = (iValue % 10);

        l1 = l1->next;
        l2 = l2->next;
        
        ListNode* temp = Ans;

        //Other digits
        while(l1 != nullptr && l2 != nullptr)
        {
            iValue = l1->val + l2->val + iTen;
            iTen = iValue / 10;
            iValue = iValue % 10;

            ListNode* a = new ListNode(iValue);
            temp->next = a;
            temp = temp->next;

            l1 = l1->next;
            l2 = l2->next;
        }
        
        //If l1 still has more elements
        if(l1 != nullptr && l2 == nullptr)
        {
            while(l1 != nullptr)
            {
                ListNode* a = new ListNode((l1->val + iTen) % 10);
                iTen = (l1->val + iTen) / 10;
                
                l1 = l1->next;
                temp->next = a;
                temp = temp->next;
            }
        }
        
        //If l2 still has more elements
        else if(l1 == nullptr && l2 != nullptr)
        {
            while(l2 != nullptr)
            {
                ListNode* a = new ListNode((l2->val + iTen) % 10);
                iTen = (l2->val + iTen) / 10;
                
                l2 = l2->next;
                temp->next = a;
                temp = temp->next;
            }
        }
        
        //If the last digit was greater than 10
        if(iTen > 0)
        {
            ListNode* a = new ListNode(iTen);
            temp->next = a;
        }

        return Ans;
    }
};
