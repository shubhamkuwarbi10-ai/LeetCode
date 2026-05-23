class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        unordered_map<int,int> mpp;
        for (int i = 0 ;i<n ;i++){
            mpp[nums[i]]++;
        }

        for (int i = 0 ;i<n ;i++){
            if (mpp[i+1] == 0) res.push_back(i+1);
        }
        return res;
    }
};