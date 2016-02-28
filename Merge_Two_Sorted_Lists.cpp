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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;
        
        // Create a Dummy Node where is the beginning of the new list
        ListNode Dummy(0);
        ListNode* New_L = &Dummy;
        
        // Letting New List's next point to the one we want from L1 or L2
        // This will loop until either L1 or L2 reach NULL
        for (; l1 != NULL && l2 != NULL ; New_L = New_L->next) {
            if ( l1->val < l2->val ) {
                New_L -> next = l1; 
                l1 = l1->next;
            }
            
            else {
                New_L -> next = l2;
                l2 = l2->next;
            }
        }
        
        New_L -> next = (l1 == NULL) ? l2:l1;
        return New_L;
        
    }   
    
};
