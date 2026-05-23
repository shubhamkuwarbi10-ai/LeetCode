class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int mp = nums[0] , mn = nums[0] ;
        int ans = nums[0];

        for (int i = 1 ; i<n ;i++){
            if (nums[i] < 0 ) swap(mp ,mn);
            mp = max(nums[i] ,mp*nums[i]);
            mn = min(nums[i] ,mn*nums[i]);
            ans = max(ans ,mp);
        }

        return ans;
    }
};