class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string ,string> mpp;
        string ans;
        for (int i = 0 ;i<paths.size() ;i++){
            mpp[paths[i][0]] = paths[i][1];
        }

        for (int i = 0 ;i<paths.size() ;i++){
            if (mpp[paths[i][0]] == ""){
                ans = paths[i][0];
                break;
            }
            else if (mpp[paths[i][1]] == ""){
                ans = paths[i][1];
                break;
            }
        }
        return ans;
    }
};