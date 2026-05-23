class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<vector<int>> adj(pow(10 ,5) + 1);
        for (int i = 0; i<edges.size() ;i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }

        int m = 0;
        for (int i = 0; i<adj.size() ;i++){
            int s = adj[i].size();
            if (s > m ) {
                m = i;
            }
        }
        return m;
    }
};