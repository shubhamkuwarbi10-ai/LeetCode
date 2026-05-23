class Solution {
public:
    int count_row(vector<vector<int>>& mat ,int row){
        int count = 0;
        for (int i = 0 ;i<mat[row].size() ;i++){
            if (mat[row][i] == 1) count++;
        }
        return count;
    }

    int count_col(vector<vector<int>>& mat ,int col){
        int count = 0;
        for (int  i = 0;i<mat.size() ;i++){
            if (mat[i][col] == 1) count++;
        }
        return count;
    }
    
    int numSpecial(vector<vector<int>>& mat) {
        int res = 0;
        int row , col;
        for (int i = 0 ;i<mat.size() ;i++){
            for (int j = 0 ;j<mat[i].size() ;j++){
                row = 0 ,col = 0;
                if (mat[i][j] == 1){
                    col = count_col(mat ,j);
                    row = count_row(mat ,i);
                }
                if (row == 1 && col == 1) res++ ;
            }
        }

        return res;
    }
};