class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        int sumLeft = 0 ,sumRight = 0;
        int totalSum = 0;
        for (int i = 0 ; i<n ;i++){
            totalSum += nums[i];
        }

        for (int i = 0 ;i<n ;i++){
            if (i == 0){
                sumLeft = 0;
                sumRight = totalSum - nums[i];
                res.push_back(abs(sumLeft - sumRight));
                continue;
            }
            if (i == n-1){
                sumRight = 0;
                sumLeft = totalSum - nums[i];
                res.push_back(abs(sumLeft - sumRight));
                continue;
            }

            sumLeft += nums[i-1];
            sumRight = totalSum - sumLeft - nums[i];

            res.push_back(abs(sumLeft - sumRight));
        }
        return res;
    }
};