class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int c = 0 ,i = 0;
        long least_sum ;
        int sum, a, n = nums.size();
        while (i < n-1){
            if (nums[i] > nums[i+1]){
                sum = 0;
                int j = 0;
                least_sum = INT_MAX;

                while (j < n-1){
                    sum = nums[j] + nums[j+1];
                    if (sum < least_sum){
                        a = j;
                        least_sum = sum;
                    }
                    j++;
                }

                nums[a] = least_sum;
                nums.erase(nums.begin()+a+1);
                n = nums.size();
                c++;
                i = 0;
            }
            else i++ ;
        }
        return c;
    }
};