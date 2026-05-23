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
    TreeNode* findNode(TreeNode* root, int val){
        if (root == NULL) return NULL;
        else {
            if (root->val == val) return root;
            else if (root->val < val) return findNode(root->right ,val);
            else return findNode(root->left ,val);
        }
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        return findNode(root ,val) ;
    }
};