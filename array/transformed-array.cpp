class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size() ; 
        vector<int> res(n);
        for (int i = 0 ; i<n ;i++){
            if (nums[i] > 0){
                int s = i + nums[i];
                if (s < n) res[i] = nums[s];
                else res[i] = nums[s%n];
            }
            else if (nums[i] < 0){
                int j = i + nums[i]%n;
                if ( j < 0) res[i] = nums[n + j];
                else res[i] = nums[j];
            }
            else {
                res[i] = nums[i];
            }
        }
        return res;
    }
};