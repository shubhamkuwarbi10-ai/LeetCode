class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mpp1;
        unordered_map<int,int> mpp2;
        for (auto el : nums1) mpp1[el]++;
        for (auto el : nums2) mpp2[el]++;
        vector<int> res;

        for (auto it : mpp1){
            if (it.second > 0 && mpp2[it.first] > 0){
                int s = it.second <= mpp2[it.first] ? it.second : mpp2[it.first]; 
                while (s--) res.push_back(it.first);
            }
        }
        return res;
    }
};