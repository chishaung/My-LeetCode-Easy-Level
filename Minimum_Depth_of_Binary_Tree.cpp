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
    int minDepth(TreeNode* root) {
        if (root == NULL) return 0;
        return check(root);
    }
    
    int check(TreeNode* root) {
        
        if (root == NULL) return 0;
        
        if (root->left == NULL) return check(root->right) + 1;
        if (root->right == NULL) return check(root->left) + 1;
        
        
        int left = check(root->left);
        int right = check(root->right);
        
        return min(left+1, right+1);
        
    }
};
