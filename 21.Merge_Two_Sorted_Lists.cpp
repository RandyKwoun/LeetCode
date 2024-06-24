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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* Ans = nullptr;
        
        //Making first node
        //If both list1 and list 2 are non-empty list
        if(list1 != nullptr && list2 != nullptr)
        {
            Ans = new ListNode();
            (list1->val <= list2->val) ? Ans->val = list1->val : Ans->val = list2->val;
            (list1->val <= list2->val) ? (list1 = list1->next) : (list2 = list2->next);
        }
        
        //If one of both list1 and list2 is empty and other one is non-empty list
        else if(list1 != nullptr || list2 != nullptr)
        {
            Ans = new ListNode();
            (list1 != nullptr) ? Ans->val = list1->val : Ans->val = list2->val;
            (list1 != nullptr) ? (list1 = list1->next) : (list2 = list2->next);
        }
        
        //If both lists are empty
        else
            return Ans;
        
        ListNode* temp = Ans; //To use Ans ListNode comfortable
        
        //combinging two lists until one list reaches its end
        while(list1 != nullptr && list2 != nullptr)
        {
            ListNode* value = new ListNode();
            
            //If list1's value is smaller than or equal to list2's value
            if(list1->val <= list2->val)
            {
                value->val = list1->val;
                list1 = list1->next;
            }
            
            //If list1's value is greater than list2's value
            else
            {
                value->val = list2->val;
                list2 = list2->next;
            }
            
            temp->next = value;
            temp = temp->next;
        }
        
        //If list1 still has elements
        while(list1 != nullptr)
        {
            ListNode* value = new ListNode(list1->val);
            temp->next = value;
            temp = temp->next;
            list1 = list1->next;
        }
        
        //If list2 still has elements
        while(list2 != nullptr)
        {
            ListNode* value = new ListNode(list2->val);
            temp->next = value;
            temp = temp->next;
            list2 = list2->next;
        }
        
        return Ans;
    }
};
