class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size(), sum = INT_MIN;
        int l = 0, r = n-1;
        while (l < n/2){
            int max_sum = nums[l] + nums[r];
            if (max_sum >= sum){
                sum = max_sum ;
            }
            l++;
            r--;
        }
        return sum;
    }
};