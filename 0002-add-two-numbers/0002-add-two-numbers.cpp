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
    int carry = 0, sum = 0;
    ListNode * result = new ListNode(0);
    ListNode * temp = result;
    while(l1!= nullptr && l2!= nullptr)
    {
        int x1 = l1 -> val, x2 = l2 -> val;
        l1 = l1 -> next;
        l2 = l2 -> next;
        sum = x1 + x2 + carry;
        carry = sum /10;
        temp -> next = new ListNode(sum%10);
        temp = temp -> next;
    }
//     else if(carry != 0 && l2 == NULL)
//     {
//         temp -> next = new ListNode(l1 -> next -> val + carry);
//         l1 = l1 -> next;
//     }
//     else if(carry!= 0 && l1 == NULL)
//     {
//         temp -> next = new ListNode(l2-> next-> val + carry);
//         l2 = l2 -> next;
//     }
        
    while(l1!= nullptr)
    {
        
        int y1 = l1 -> val;
        l1 = l1 -> next;
        sum = y1 + carry;
        carry = sum/10;
        temp -> next = new ListNode(sum%10);
        temp = temp -> next;
    }
        
    while(l2!= nullptr)
    {
        int y2 = l2 -> val;
        l2 = l2 -> next;
        sum = y2 + carry;
        carry = sum/10;
        temp -> next = new ListNode(sum%10);
        temp = temp -> next;
    }
    if(l1== NULL && l2== NULL && carry != 0)
        temp -> next = new ListNode(carry);
    return result -> next;
    }
};