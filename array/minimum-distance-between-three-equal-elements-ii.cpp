class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int ,vector<int>> mpp;
        for (int i = 0 ;i < nums.size() ;i++) mpp[nums[i]].push_back(i);

        int dist = INT_MAX;
        bool found = false;

        for (auto& [k ,i] : mpp){
            if (i.size() >= 3){
                found = true;
                for (int j = 0 ;j < i.size() - 2 ;j++){
                    dist = min(dist ,abs(2 * (i[j+2] - i[j])));
                }
            }
        }

        return found ? dist : -1;
    }
};