// 快慢指標
// fast 先比 slow 先走 n 步
// 當fast走到NULL時 slow就剛好在倒數第n的位置

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
        ListNode *Dummy = new ListNode (-1);
        Dummy->next = head;
        ListNode *slow = Dummy, *fast = Dummy;
        
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }
        
        while (fast->next != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
        slow -> next = slow->next->next;
        return Dummy->next;
    }
};
