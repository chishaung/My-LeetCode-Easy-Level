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
    bool isPalindrome(ListNode* head) {
        vector<int> tmp;
        bool odd = true;
        
        if (!head || !head->next || (head->next->next == NULL && head->val == head->next->val)) return true;
        
        ListNode* fast = head;
        ListNode* slow = head;
        
        // Here is O(n/2)
        while(fast != NULL && fast->next != NULL) {
            tmp.push_back(slow->val);
            slow = slow->next;
            if (fast->next->next == NULL) {
                odd = false;
                fast = NULL;
            }
            else fast = fast->next->next;
        }
        
        
        if (odd) {
            slow = slow->next;
        }
        
        
        // Another O(n/2)
        int i = tmp.size()-1;
        while (slow) {
            
            if (slow->val != tmp[i]) {
                return false;
            }
            slow = slow->next;
            i--;
        }
        
        return true;
        
    }
};
