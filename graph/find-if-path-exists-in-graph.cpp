class Solution {
public:
    stack<int> stk;
    void dfs(vector<vector<int>>& adj, vector<bool>& v ,int s, int d ,bool& ans ){
        if (s == d){
            ans = true;
            return;
        }
        v[s] = true;
        for (int& n : adj[s]){
            if (!v[n]) dfs(adj ,v ,n ,d ,ans);
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<bool> v(n ,false);
        vector<vector<int>> adj(n) ;
        for (auto& e : edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        bool ans = false;
        dfs(adj ,v ,source ,destination ,ans);
        return ans;
    }
};