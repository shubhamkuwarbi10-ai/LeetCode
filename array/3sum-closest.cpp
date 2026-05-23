class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int left , right , size = nums.size() , maxDiff = INT_MAX , diff;
        int res , sum ;
        for (int i = 0 ; i<size-2 ; i++){
            left = i+1 , right = size-1;
            // if (left == i) left++;
            // if (right == i) right--;
            while (left < right){
                sum = nums[i] + nums[left] + nums[right];
                if (sum == target) return sum;
                else if (sum < target){
                    diff = abs(sum - target);
                    if (diff <= maxDiff){
                        maxDiff = diff;
                        res = sum;
                    }
                    left++;
                }
                else {
                    diff = abs(sum - target);
                    if (diff < maxDiff){
                        maxDiff = diff;
                        res = sum;
                    }
                    right--;
                }
            }
        }
        return res;
    }
};