class Solution {
public:
    int maxArea(vector<int>& nums) {
        int l = 0 , r = nums.size() - 1;
        int h = 0 , w = 0 , area = 0;
        int maxWater = 0;
        while(l < r){
            h = min(nums[l] ,nums[r]);
            w = r - l;
            area = h * w;
            maxWater = max(maxWater ,area);
            nums[l] < nums[r] ? l++ : r--;
        }
        return maxWater;
    }
};