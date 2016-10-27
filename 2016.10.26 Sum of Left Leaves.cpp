/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    int help(TreeNode* root, int flag) {
        
        if (!root) return 0;
        if (flag == 0) return help(root->left, 1) + help(root -> right, 2);
        if (flag == 1) {
            if (!root->left && !root->right) return root->val;
        }
        return help(root->left, 1) + help(root->right, 2);
        
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        return help(root, 0);    
    }
};
