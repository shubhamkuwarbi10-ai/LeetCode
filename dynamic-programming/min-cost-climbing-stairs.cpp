class Solution {
public:
    int dp(int n ,vector<int>& m ,vector<int>& cost){
        if (n == 0 || n == 1) return cost[n];

        if (m[n] != -1) return m[n];

        return m[n] = cost[n] + min( dp(n-1 ,m ,cost) ,dp(n-2 , m ,cost));
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> m(n+1 ,-1);

        return min(dp(n-1 ,m ,cost) ,dp(n-2 ,m ,cost));
    }
};