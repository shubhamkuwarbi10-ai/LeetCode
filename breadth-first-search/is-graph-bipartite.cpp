class Solution {
public:
    bool ans(int V ,vector<vector<int>>& graph ,vector<int>& colour ,queue<int>& q){
        for (int i = 0 ;i<V ;i++){
            if (colour[i] == -1){
                colour[i] = 0;
                q.push(i);
                while(!q.empty()){
                    int node = q.front();
                    q.pop();
                    for(int n : graph[node]){
                        if (colour[n] == -1){
                            colour[n] = 1 - colour[node];
                            q.push(n);
                        }
                        else if (colour[n] == colour[node]) return false;
                    }
                }
            }
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> colour(n ,-1);
        queue<int> q;
        return ans(n ,graph ,colour ,q);
    }
};