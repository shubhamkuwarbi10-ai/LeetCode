class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans = 0 , n = nums.size();
        if (n == 1){
            return 0;
        }
        int left = 0 ,right = n-1;
        while (left < right){
            if (nums[left] + nums[right] < target){
                ans += (right - left);
                left++;
            }
            else right--;
        }
        return ans;
        
    }
};