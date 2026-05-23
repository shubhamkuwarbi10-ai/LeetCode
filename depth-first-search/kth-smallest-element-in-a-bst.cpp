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
    void inorder_traversal(TreeNode * root ,vector<int>& inorder){
        if (root == NULL) return;
        inorder_traversal(root->left ,inorder);
        inorder.push_back(root->val);
        inorder_traversal(root->right ,inorder);
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int> inorder;
        inorder_traversal(root ,inorder);
        int res = 0;
        for (int i = 0 ; i<inorder.size() ;i++){
            if (i == k-1) {
                res = inorder[i];
                break;
            }
        }
        return res;
    }
};