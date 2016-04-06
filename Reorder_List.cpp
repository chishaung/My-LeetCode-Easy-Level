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
    void reorderList(ListNode* head) {
        
        // handling list with 0 or 1 element
        if (head == NULL || head->next == NULL) return;
        

        else {
            ListNode* slow;
            ListNode* fast;
            slow = head;
            fast = head;
            stack<ListNode*> stk;
        
            // slow/fast pointer ->>> slow walk 1, fast walks 2 every loop
            while(fast != NULL && fast->next != NULL && fast->next->next != NULL) {
                slow = slow->next;
                fast = fast->next->next;
            }
        
            // Found mid point and keep walking and push from mid point to end point into stack
            while(slow != NULL) {
                stk.push(slow);
                slow = slow->next;
            }
        
            ListNode *tmp;
            slow = head;
            tmp = head->next;
        
            // Combined two list
            while (!stk.empty()) {
                slow->next = stk.top();
                stk.top()->next = tmp;
                tmp = tmp->next;
                stk.pop();
                slow = slow->next->next;
            }
        
            // Don't forget to set up the NULL at the end of the list
            slow->next = NULL;
        }
        
    }
};
