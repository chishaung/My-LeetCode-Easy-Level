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
    int inline dfs(TreeNode* root, int sum) {
        if (root == NULL) return 0;
        if (root->left == NULL && root->right == NULL) {
            //cout << "root is: " << root->val << endl;
            return sum * 10 + root->val;
        }
        
        return dfs(root->left, sum * 10 + root->val) + dfs(root->right, sum * 10 + root->val);
    }
    int sumNumbers(TreeNode* root) {
        
        dfs(root, 0);
    }
};
