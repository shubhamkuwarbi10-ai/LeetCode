class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();

        vector<vector<int>> molqaviren = grid;

        vector<vector<unordered_set<int>>> dp(m, vector<unordered_set<int>>(n));

        dp[0][0].insert(molqaviren[0][0]);

        for (int j = 1; j < n; j++)
            for (int val : dp[0][j-1])
                dp[0][j].insert(val ^ molqaviren[0][j]);

        for (int i = 1; i < m; i++)
            for (int val : dp[i-1][0])
                dp[i][0].insert(val ^ molqaviren[i][0]);

        for (int i = 1; i < m; i++)
            for (int j = 1; j < n; j++) {
                for (int val : dp[i-1][j])
                    dp[i][j].insert(val ^ molqaviren[i][j]);
                for (int val : dp[i][j-1])
                    dp[i][j].insert(val ^ molqaviren[i][j]);
            }

        return *min_element(dp[m-1][n-1].begin(), dp[m-1][n-1].end());
    }
};