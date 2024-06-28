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
    ListNode* rotateRight(ListNode* head, int k) {
        //If head is empty list
        if(head == nullptr)
            return nullptr;
        
        ListNode* Ans = new ListNode(INT_MAX); //To save the answer + make a head node
        size_t iSize = 0; //To save the length of the head
        ListNode* temp = head; //To save the head node of the list head
        
        //To calculate the length of the list
        while(head != nullptr)
        {
            head = head->next;
            iSize++;
        }
        
        head = temp; //Reset the list head
        
        size_t iRotate = k % iSize; //Recalculate the number of rotate
        
        //Make the first node to start
        for(size_t i = 0; i < (iSize - iRotate); i++)
            head = head->next;
        
        ListNode* ansTemp = Ans; //To use Ans well
        
        //Save the rotated values
        for(size_t i = 0; i < iSize; i++)
        {
            if(head == nullptr)
                head = temp;
            
            ListNode* a = new ListNode(head->val);
            ansTemp->next = a;
            ansTemp = ansTemp->next;
            head = head->next;
        }
        
        //delete the head node
        ansTemp = Ans->next;
        delete Ans;
        Ans = ansTemp;
        
        return Ans;
    }
};
