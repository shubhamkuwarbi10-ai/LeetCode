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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        priority_queue<long long> pq;
        if (root == NULL) return -1;
        queue<TreeNode *> q;
        q.push(root);
        long long sum , level = 0;
        while (!q.empty()){
            long long size = q.size();
            sum = 0;
            level += 1;
            while (size--){
                sum += q.front()->val;
                if (q.front()->left != NULL) q.push(q.front()->left);
                if (q.front()->right != NULL) q.push(q.front()->right);
                q.pop();
            }
            pq.push(sum);
        }
        long long res = -1;
        while (k <= level && k > 0 ){
            if (k == 1) {
                res = pq.top();
                break;
            }
            pq.pop();
            k--;
        }
        return res;
    }
};