class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& mat) {
        int n = mat.size();
        vector<int> ans(n);

        for (int i = 0 ; i < n ;i++){
            int c = 0;
            for (int j = 0 ;j <  mat[i].size() ;j++){
                if (mat[i][j] == 1) c++;
            }
            ans[i] = c;
        }
        return ans;
    }
};