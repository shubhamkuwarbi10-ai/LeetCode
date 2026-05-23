class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size() , count = 0 ,sum = 0;
        unordered_map<int ,int> mpp;
        mpp[0] = 1;

        for (int i = 0 ; i < n ;i++){
            sum += nums[i];

            int rem = sum - k;

            count +=mpp[rem];

            mpp[sum]++;
        }
        
        return count;
    }
};