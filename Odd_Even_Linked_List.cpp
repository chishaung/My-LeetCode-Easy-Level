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
    ListNode* oddEvenList(ListNode* head) {
        // 當LL為空 只有1個 只有兩個Node時可以直接回傳同一List
        if (head == NULL || head->next == NULL || head->next->next == NULL) return head;
        ListNode *odd, *even, *even_head;
        odd = head;
        even = head->next;
        even_head = even;
        while (odd || even) {
            
            odd->next = odd->next->next;
            even->next = even->next->next;
            
            odd = odd->next;
            even = even->next;
            
            
            if (odd->next == NULL || odd->next->next == NULL) break;
        }
        odd->next = even_head;
        
        return head;
    }
};
