class Solution {
public:
    vector<int> intersection(vector<int>& n, vector<int>& m) {
        unordered_map<int,int> mpp1;
        for (auto el : n) mpp1[el]++;
        unordered_map<int,int> mpp2;
        for (auto el : m) mpp2[el]++;
        vector<int> res;
        for (auto it : mpp1){
            if (it.second > 0 && mpp2[it.first] > 0) res.push_back(it.first);
        }
        return res;
    }
};