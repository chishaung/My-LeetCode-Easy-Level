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

    int check(TreeNode* root) {
        
        if (root == NULL) return 0;
        
        int depth_left = check(root->left);
        int depth_right = check(root->right);
        
        return max(depth_left, depth_right) + 1;
    }

    int maxDepth(TreeNode* root) {
        if (root == NULL) return 0;
        return check (root);
    }
};
