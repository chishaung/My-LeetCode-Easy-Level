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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // 讓A跟B一直往前跑直接交叉為止
        // A跑完就跳到B去 B跑完就跳到A去 最後兩條會交叉在同一點或是最後(NULL)
        
        ListNode* first = headA;
        ListNode* second = headB;
        
        while (first != second) {
            if (first) first = first->next;
            else first = headB;
            
            if (second) second = second->next;
            else second = headA;
        }
        return first;
    }
};
