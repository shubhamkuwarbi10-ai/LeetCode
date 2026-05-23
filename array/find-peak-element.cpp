class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int peak,st=0,end=n-1,mid=(st+end)/2;
        if (nums.size()==1) return 0;
        if (nums.size()==2) {
            peak=nums[0]>nums[1]?0:1;
            return peak;
        }
        int i=1;
        while (st!=mid+1){
            if (nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) return  peak=mid;
            else if (mid!=n-1) mid++;
            if (nums[n-1]>nums[n-2]) return n-1;
            if (nums[st]>nums[st+1]) return peak=0;
            if (nums[st+i]>nums[st+i+1] && nums[st+i]>nums[st]) return peak=st+i;
            st++;
        }
        return peak;
    }
};