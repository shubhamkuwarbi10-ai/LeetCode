class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        int sumLeft = 0 ,sumRight = 0;
        int totalSum = 0;
        for (int i = 0 ; i<n ;i++){
            totalSum += nums[i];
        }

        for (int i = 0 ;i<n ;i++){
            if (i == 0){
                sumLeft = 0;
                sumRight = totalSum - nums[i];
                if (sumLeft == sumRight) return i;
                continue;
            }
            if (i == n-1){
                sumRight = 0;
                sumLeft = totalSum - nums[i];
                if (sumLeft == sumRight) return i;
                continue;
            }

            sumLeft += nums[i-1];
            sumRight = totalSum - sumLeft - nums[i];

            if (sumLeft == sumRight) return i;
        }
        return -1;
    }
};