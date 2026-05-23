class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int diff = INT_MAX;
        int min_diff;
        int i = 0, r = nums.size();
        if (k > r) return 0;
        sort(nums.begin(),nums.end());
        while (i+k <= r){
            min_diff = abs(nums[i]-nums[i+k-1]);
            diff = min(diff ,min_diff);
            i++;
        }
        return diff;
    }
};