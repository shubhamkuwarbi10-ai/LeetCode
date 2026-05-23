class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char,int> mpp;
        for (auto c : s) mpp[c]++;
        int c = 0;
        for (auto it : mpp){
            if (it.second > 1){
                c += 1;
            }
            else c++;
        }
        return c;
    }
};