class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int diff = -1 , d = INT_MAX;
        int n = nums.size();
        for (int i = 0;i<n-1 ;i++){
            for (int j = i+1 ;j<n ;j++){
                if (nums[i] == 1 && nums[j] == 2 || nums[i] == 2 && nums[j] == 1){
                    d = min(d , abs(i - j));
                }
            }
        }
        if (d == INT_MAX) return diff;
        return d;
    }
};