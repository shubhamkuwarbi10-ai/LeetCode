class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int find = 0 , res = 0 , n = nums.size();
        for (int i = 0 ;i < n ;i++){
            if ( nums[i] == 1){
                find += 1;
                res = max(res ,find);
            }
            else {
                res = max(res ,find);
                find = 0;
            }

        }
        return res;
    }
};