class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int k;
        if (nums.size()==1) return nums[0];
        for (int i=0;i<nums.size();i=i+2){
            if (nums[i]!=nums[i+1] || (i==nums.size()-1 && nums[i]!=nums[i-1]))  {
                k=nums[i];
                break;
            }
        }
        return k;
        
    }
};