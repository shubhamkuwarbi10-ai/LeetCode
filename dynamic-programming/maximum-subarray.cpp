class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = INT_MIN;
        int curr_sum = nums[0] , max_result = nums[0];
        
        for (int i =1 ; i<nums.size() ;i++){
            curr_sum = max(nums[i] ,curr_sum + nums[i]);
            max_result = max(curr_sum ,max_result);
        }

        return max_result;

    }
};