class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        int c = 0;
        for (int i = 0 ;i<nums.size() ;i++){
            c = c + nums[i];
            res.push_back(c);
        }
        return res;
    }
};