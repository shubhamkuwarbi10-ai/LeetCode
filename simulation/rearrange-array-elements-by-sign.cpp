class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos ;
        vector<int> neg ;
        int  n = nums.size();

        for (int i = 0 ;i<n ;i++){
            if (nums[i] >= 0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }
        vector<int> res;
        int j = 0 ,k = 0;
        for (int i = 0;i<pos.size()+neg.size() ;i++){
            if (i % 2 == 0) res.push_back(pos[j++]);
            else res.push_back(neg[k++]);
        }

        return res;
    }
};