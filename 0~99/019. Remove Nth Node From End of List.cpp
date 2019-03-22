/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fast = head, *slow = head;
        for (int i = 0; i < n; i++, fast = fast->next);
        if (!fast)
            return head->next;
        for (; fast->next; fast = fast->next, slow = slow->next);
        slow->next = slow->next->next;
        return head;
    }
};
