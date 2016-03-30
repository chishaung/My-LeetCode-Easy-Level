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
    
    bool isBalanced (TreeNode* root) {
        return balancedHeight (root) >= 0;
    }

    /**
    * Returns the height of `root` if `root` is a balanced tree,
    * otherwise, returns `-1`.
    */
    int balancedHeight (TreeNode* root) {

        if (root == NULL) return 0;
    
        int left_height = balancedHeight(root->left);
        int right_height = balancedHeight(root->right);
        
        if (left_height < 0 || right_height < 0 || abs(left_height - right_height) > 1) return -1;
    
        return max(left_height, right_height) + 1;
    }
};
