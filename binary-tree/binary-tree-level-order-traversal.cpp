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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == NULL) return {};
        vector<vector<int>> res;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()){
            vector<int> nodes;
            int size = q.size();
            while (size--){
                int data = q.front()->val;
                nodes.push_back(data);
                if (q.front()->left != NULL) q.push(q.front()->left);
                if (q.front()->right != NULL) q.push(q.front()->right);
                q.pop();
            }
            res.push_back(nodes);
        }

        return res;
    }
};