class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int high = 1,low = 0 ;
        while (high < nums.size()){
            if (nums[high-1] == nums[high]) high+=1;
            else {
                low+=1;
                nums[low] = nums[high];
                high ++;
            } 
        }
        return low+1;
    }
};