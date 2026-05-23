class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        long long sum = 0;
        vector<int> gcd;
        vector<int> temp(1 ,nums[0]);
        int mxi = nums[0] , f = nums[0];
        gcd.push_back(mxi);
        
        for (int i = 1 ;i<nums.size() ;i++){
            f = max(f ,nums[i]);
            mxi = __gcd(f ,nums[i]);
            gcd.push_back(mxi);
        }

        sort(gcd.begin() ,gcd.end());
        int  i = 0 , j = gcd.size()-1;
        while (i < j){
            sum += __gcd((long long)gcd[i] , (long long) gcd[j]);
            i++;
            j--;
        }
        return sum ;
        
    }
};