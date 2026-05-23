class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;
        for (int i : nums){
            int temp = i;
            while (temp != 0){
                int rem = temp % 10;
                temp /= 10;
                if (rem == digit) count++;
            }
        }
        return count;
    }
};