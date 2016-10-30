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
    void deleteNode(ListNode* node) {
    // Method 1: simple solution, but memory leak
    node->val = node->next->val;
    node->next = node->next->next;

    
    // Method 2: regular linked list 
    /*
    ListNode* curr = node;
    ListNode* forward;
    if (curr -> next != NULL) {
        forward = curr->next;
        curr->val = forward->val;
        curr->next = curr->next->next;
        free(forward);
    }
    */
    }
};
