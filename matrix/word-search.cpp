class Solution {
public:
    bool dfs_word(vector<vector<char>>& b, string w ,int i ,int j ,int k){
        if (k == w.size()) return true;

        if (i >= b.size() || j >= b[0].size() || i < 0 ||  j < 0 || b[i][j] != w[k]) return false;

        char s = b[i][j];
        
        b[i][j] = '#';
        
        bool found = (dfs_word(b ,w ,i+1 ,j ,k+1) || 
        dfs_word(b ,w ,i-1 ,j ,k+1) ||
        dfs_word(b ,w ,i ,j+1 ,k+1) || 
        dfs_word(b ,w ,i ,j-1 ,k+1));

        b[i][j] = s;

        return found;
    }
    bool exist(vector<vector<char>>& b, string w) {
        int r = b.size() , c = b[0].size();
        for (int i = 0 ; i < r ;i++){
            for (int j = 0 ; j < c ;j++){
                if (dfs_word(b ,w ,i ,j ,0)){
                    return true;
                }
            }
        }
        return false;
    }
};