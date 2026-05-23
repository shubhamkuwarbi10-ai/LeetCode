class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = 0 , r = 0;
        while (r < nums.size()){
            if (nums[l] == 0 && nums[r] == 0){
                r++;
            }
            else if (nums[l] != 0 && nums[r] != 0){
                r++;
                l++;
            }
            else if (nums[l] == 0 && nums[r] != 0){
                swap(nums[r] ,nums[l]);
                l++;
                r++;
            }
        }
    }
};