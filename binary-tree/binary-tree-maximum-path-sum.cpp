/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int check(TreeNode* root ,int& maxSum){
        if (root == NULL) return 0;
        
        maxSum = max(root->val ,maxSum);
        int lh = check(root->left ,maxSum);
        int rh = check(root->right ,maxSum);

        maxSum = max(lh + rh + root->val, maxSum );
        if (lh < 0) {
            maxSum = max(rh + root->val, maxSum );
            return max({rh + root->val , root->val});
        }
        else if (rh < 0) {
            maxSum = max(lh + root->val, maxSum );
            return max({lh + root->val , root->val});
        }
        else if (lh < 0 && rh < 0){
            maxSum = max(root->val, maxSum );
            return root->val;
        }
        return max(lh + root->val , rh + root->val);
    }
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        check(root ,maxSum);
        return maxSum;
    }
};