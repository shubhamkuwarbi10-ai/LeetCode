class Solution {
public:
    bool isHappy(int n) {
        long long temp = n;
        long long sum = 0;
        long long count = 0;
        while (count <= 100){
            if (temp == 0){
                if (sum == 1) return true;
                else {
                    temp = sum;
                    sum = 0;
                    count++;
                }
            }
            else {
                int rem = temp%10;
                sum += pow(rem ,2);
                temp /= 10;
                count++;
            }
        }
        return false;
    }
};