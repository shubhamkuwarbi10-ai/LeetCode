class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int> res;
        int row = mat.size() , col = mat[0].size();
        int left = 0 ,right = col - 1;
        int top = 0 ,btm = row - 1;

        while (top <= btm && left <= right){
            for(int i = left ;i<= right ;i++){
                res.push_back(mat[top][i]);
            }
            top++;

            for (int i = top ;i<= btm ;i++){
                res.push_back(mat[i][right]);
            }
            right--;

            if (top <= btm){
                for (int i = right ;i>= left ;i--){
                    res.push_back(mat[btm][i]);
                }
                btm--;
            }
            

            if (left <= right){
                for ( int i = btm ;i>= top ;i--){
                    res.push_back(mat[i][left]);
                }
                left++;
            }
        }

        return res;
    }
};