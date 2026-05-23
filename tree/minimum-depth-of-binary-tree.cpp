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
    int minDepth(TreeNode* root) {
        if (root == NULL) return 0;
        queue<TreeNode*> q;
        q.push(root);
        vector<int> res(1 ,1);
        int count = 0;

        while (!q.empty()){
            int size = q.size();
            count ++;
            while (size--){
                if (q.front()->left == NULL && q.front()->right == NULL) return count;
                else {
                    if (q.front()->left != NULL) q.push(q.front()->left);
                    if (q.front()->right != NULL) q.push(q.front()->right);
                }
                q.pop();
            }
        }
        return count;
    }
};