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
        if(lists.size() == 0)
            return NULL;
        priority_queue<int, vector<int>, greater<int>> ans;
        for(int i = 0; i < lists.size(); i++)
        {
            ListNode* temp = lists[i];
            if(temp == NULL)
                continue;
            while(temp -> next != NULL)
            {
                ans.push(temp -> val);
                temp = temp -> next;
            }
            ans.push(temp -> val);
        }
        
        if(ans.empty())
            return NULL;

        ListNode* head = new ListNode(ans.top());
        ans.pop();
        ListNode* tmp = head;
        while(!ans.empty())
        {
            ListNode* a = new ListNode(ans.top());
            tmp -> next = a;
            tmp = tmp -> next;
            ans.pop();
        }

        return head;
    }
};