class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0 , high = nums.size() - 1;
        int index ;
        while (low <= high){
            int mid = low + ((high - low) / 2);
            index = mid ;
            if (nums[mid] == target) {
                return mid;
            }

            else if (nums[mid] < target) {
                low = mid +1 ;
            }
            else high = mid - 1 ;
        }
        if (target > nums[index]) index+=1;
        return index ;
    }
};