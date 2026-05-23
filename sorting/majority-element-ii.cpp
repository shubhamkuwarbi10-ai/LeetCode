class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res ;
        unordered_map<int ,int> mpp;

        for (int i : nums){
            mpp[i]++;
        }

        int n = nums.size();

        for (auto& [k,v] : mpp){
            if (v > n/3) res.push_back(k);
        }
        return res;
    }
};