#include <iostream>
#include <vector>

using namespace std;

//* Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == nullptr)
            return nullptr;
        
        ListNode* Ans = new ListNode(INT_MAX); //To save the answer and make head node
        vector<int> vValue; //To save the values to swap
        ListNode* temp = Ans; //To use ans well
        
        //Swap the elements
        while(true)
        {
            //If vValue have enough elements to swap
            if(vValue.size() >= k)
            {
                for(int i = (k - 1); i >= 0; i--)
                {
                    ListNode* a = new ListNode(vValue[i]);
                    temp->next = a;
                    temp = temp->next;
                }
                
                vValue.clear(); //Make the vValue empty
            }
            
            //If head reached its end then break
            if(head == nullptr)
                break;
            
            vValue.push_back(head->val);
            head = head->next;
        }
        
        //If vValue still has some value in it
        if(vValue.size() > 0)
        {
            for(int i = 0; i < vValue.size(); i++)
            {
                ListNode* a = new ListNode(vValue[i]);
                temp->next = a;
                temp = temp->next;
            }
            
            vValue.clear();
        }
        
        //Delete the head node
        temp = Ans->next;
        delete Ans;
        Ans = temp;
        
        return Ans;
    }
};

//Test cases
int main(void)
{
    ListNode* a4 = new ListNode(5);
    ListNode* a3 = new ListNode(4, a4);
    ListNode* a2 = new ListNode(3, a3);
    ListNode* a1 = new ListNode(2, a2);
    ListNode* a = new ListNode(1, a1);
    
    ListNode* lTest1;
    Solution test;
    lTest1 = test.reverseKGroup(a, 2);
    
    cout << "Memebers of lTest1 are below" << endl;
    while(lTest1 != nullptr)
    {
        cout << lTest1->val << " ";
        lTest1 = lTest1->next;
    }
    
    ListNode* lTest2;
    lTest2 = test.reverseKGroup(a, 3);
    
    cout << "Members of lTest2 are below" << endl;
    while(lTest2 != nullptr)
    {
        cout << lTest2->val << " ";
        lTest2 = lTest2->next;
    }
    
    return 0;
}
