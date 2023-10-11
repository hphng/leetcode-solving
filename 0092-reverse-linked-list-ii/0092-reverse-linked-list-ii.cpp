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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right)
            return head;
        ListNode* tmp1 = head;
        ListNode* result = new ListNode(0);
        int a[1000], n = 1;
        while(tmp1 != NULL)
        {
            a[n] = tmp1 -> val;
            tmp1 = tmp1 -> next;
            n++;
        }
        ListNode* tmp2 = result;
        for(int i = 1; i< left; i++)
        {
            tmp2-> next = new ListNode(a[i]);
            tmp2 = tmp2 -> next;
        }
        
        for(int i = left; i <= right; i++)
        {
            tmp2-> next = new ListNode(a[left + right - i]);
            tmp2 = tmp2 -> next;
        }
        
        for(int i = right+1; i <n ; i++)
        {
            tmp2 -> next = new ListNode(a[i]);
            tmp2 = tmp2 -> next;
        }
        return result -> next;
        
    }
};