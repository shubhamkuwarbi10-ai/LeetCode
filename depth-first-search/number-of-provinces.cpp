class Solution {
public:
    void dfs(vector<vector<int>>& adj ,vector<bool>& V ,int s){
        V[s] = true;
        for (int i : adj[s]){
            if (!V[i]) dfs(adj ,V ,i);
        }
    }
    int findCircleNum(vector<vector<int>>& con) {
        int count = 0 ,n = con.size();

        vector<bool> V(n,false);
        vector<vector<int>> adj(n);
        
        // ye adj lsit bana rha h 
        for(int i = 0 ;i<n ;i++){
            for (int j = 0;j<n ;j++){
                if (con[i][j] == 1 &&  i != j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        // ye har ek node se dfs kr rha h 
        for (int i = 0;i<n ;i++){
            if (V[i] == false){
                count++;
                dfs(adj ,V ,i);
            }
        }
        return count;
    }
};