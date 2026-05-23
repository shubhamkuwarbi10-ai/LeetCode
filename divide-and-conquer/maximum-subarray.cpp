class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int currSum = 0;
        int maxi = INT_MIN ;
        
        for (int i = 0 ;i<n ;i++){
            currSum = max(nums[i] ,currSum + nums[i]);
            maxi = max(currSum ,maxi);
        }

        return maxi;
    }
};