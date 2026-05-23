class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0,size_sum;
        int length=nums.size();
        for (auto it:nums){
            sum+=it;
        }
        size_sum=(length*(length+1))/2;
        return (size_sum-sum);
    }
};