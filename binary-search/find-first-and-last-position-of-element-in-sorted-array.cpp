class Solution {
public:
    int sec_occ(vector<int>& nums, int target){
        int low = 0, high = nums.size()-1 , c = -1 ;
        if (nums.size() == 0) return c;
        while (low <= high){
            int mid = low + (high - low)/2;
            if (nums[mid] == target) {
                c = mid;
                low = mid + 1 ;
            }
            else if (nums[mid] < target) low = mid +1;
            else high = mid - 1;
        }
        return c;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1 , c = -1 , s = -1 ,f = 0;
        if (nums.size() == 0) return {-1,-1};
        while (low <= high){
            int mid = low + (high - low)/2;
            if (nums[mid] == target) {
                f++;
                c = mid;
                high = mid -1 ;
            }
            else if (nums[mid] < target) low = mid +1;
            else high = mid - 1;
        }

        if (f != 0 ) s = sec_occ(nums,target);
        return {c,s};
    }
};