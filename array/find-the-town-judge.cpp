class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> judge(n+1 ,0);
        vector<bool> factor(n+1 ,false);
        for (auto& i : trust){
            judge[i[1]]++;
            factor[i[0]] = true;
        }

        int ans = -1;
        for (int i = 1;i<n+1 ;i++){
            if (judge[i] == n-1 && !factor[i]) {
                return i;
            }
        }
         
        return -1;
    }
};