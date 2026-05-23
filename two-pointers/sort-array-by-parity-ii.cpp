class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> odd ;
        vector<int> even ;
        int  n = nums.size();

        for (int i = 0 ;i<n ;i++){
            if (nums[i]%2 != 0) odd.push_back(nums[i]);
            else even.push_back(nums[i]);
        }

        vector<int> res;
        int j = 0 ,k = 0;
        for (int i = 0;i<odd.size() + even.size() ;i++){
            if (i % 2 == 0) res.push_back(even[j++]);
            else res.push_back(odd[k++]);
        }

        return res;
    }
};