class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int> on;
        unordered_map<int,int> mpp;
        for (int i = 0 ;i<bulbs.size() ;i++) mpp[bulbs[i]]++;

        for (auto it : mpp){
            if (it.second%2 == 1) on.push_back(it.first);
        }

        sort(on.begin() ,on.end());
        return on;

    }
};