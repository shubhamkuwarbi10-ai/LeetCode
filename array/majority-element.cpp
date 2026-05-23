class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i = 0 ;i<nums.size() ;i++){
            mpp[nums[i]]++;
        }
        int m = 0 , n ;
        for (auto it : mpp){
            if (it.second >= m){
                m = it.second;
                n = it.first; 
            }
        }
        return n;
    }
};