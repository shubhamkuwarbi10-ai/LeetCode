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
    int maxLevelSum(TreeNode* root) {
        int level = 1 ,ans = INT_MAX;
        int sum = 0 ,max_sum = INT_MIN;
        queue<TreeNode*> q;
        unordered_map<int ,int> mpp;
        q.push(root);
        
        while (!q.empty()){
            int size = q.size();
            sum = 0;
            while (size--){
                sum += q.front()->val;
                if (q.front()->left != NULL) q.push(q.front()->left);
                if (q.front()->right != NULL) q.push(q.front()->right);
                q.pop();
            }
            mpp[level] = sum;
            level++;
            max_sum = max(sum ,max_sum);
        }

        for (int i = 1;i<=level ;i++){
            if (mpp[i] == max_sum) ans = min(i ,ans);
        }

        return ans;
    }
};