class Solution {
public:
    int minMoves(vector<int>& nums) {
        int m=0;
        int n=0;
        int len=nums.size();
        for (int j=0;j<len;j++){
            m=max(m,nums[j]);
        }
        for (int i=0;i<len;i++){
            if (m>nums[i]) n+=(m-nums[i]);
        }
        return n;
    }
};