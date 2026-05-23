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
    void check_h(TreeNode* p , TreeNode* q ,bool& ans){
        
        if (p == NULL && q == NULL) return;

        else if ( (p != NULL && q == NULL) || (p == NULL && q != NULL) ){
            ans = false;
            return;
        }

        else if (p->val != q->val) {
            ans = false;
            return;
        }

        else {
            check_h(p->left ,q->left ,ans);
            check_h(p->right ,q->right ,ans);
        }
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {

        if (p == NULL && q != NULL) return false;
        if (q == NULL && p != NULL) return false;

        bool ans = true;
        check_h(p ,q ,ans);

        return ans;
    }
};