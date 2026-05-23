class Solution {
public:
    int dfs(vector<vector<int>>& grid ,int i ,int j){
        if ( i >= grid.size() || j >= grid[0].size() || i < 0 || j < 0 || grid[i][j] == 0) return 0;

        int gold = grid[i][j];
        
        grid[i][j] = 0;

        int top = dfs(grid ,i-1 ,j);
        int down = dfs(grid ,i+1 ,j);
        int left = dfs(grid ,i ,j-1);
        int right = dfs(grid ,i ,j+1);

        grid[i][j] = gold;

        return gold + max({top ,down ,left ,right});
    }

    int getMaximumGold(vector<vector<int>>& grid) {
        int max_sum = 0;
        int r = grid.size() , c = grid[0].size();

        for (int i = 0 ; i< r ;i++){
            int sum = 0;
            for (int j = 0; j<c ;j++){
                if (grid[i][j] != 0){
                    max_sum = max(dfs(grid ,i ,j) ,max_sum);
                }
            }
        }
        return max_sum;
    }
};