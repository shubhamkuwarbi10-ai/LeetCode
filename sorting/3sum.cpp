class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int size = nums.size();
        int left , right , sum;
        sort(nums.begin(),nums.end());
        for (int i = 0 ; i<size-2 ;i++){
            if (i>0 && nums[i] == nums[i-1]) continue;
            left = i+1 , right = size-1;
            sum = -1*nums[i];
            while ( left < right){
                int s = nums[left]+nums[right];
                if (s == sum){
                    res.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;

                    while (left < size-1 && nums[left] == nums[left-1]) left++;
                    while (right >= 0 && nums[right] == nums[right+1]) right--;
                }
                else if (s < sum) left++;
                else right--;
            }

        }
        return res;
    }
};