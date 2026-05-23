class Solution {
public:

    bool isPrime(int n){
        if (n == 1) return false;

        for (int i = 2 ; i <= sqrt(n) ;i++){
            if (n % i == 0) return false;
        }

        return true;
    }

    int minOperations(vector<int>& nums) {
        int mo = 0;
        for (int i = 0 ; i< nums.size() ;i++){
            if (i%2 == 0){
                if (isPrime(nums[i])) continue;
                else{
                    int no = nums[i];
                    while (!isPrime(no)){
                        mo++;
                        no++;
                    }
                }
            }
            else {
                if (isPrime(nums[i])){
                    int no = nums[i];
                    while (isPrime(no)){
                        mo++;
                        no++;
                    }
                }
                else continue;
            }
        }
        return mo;
    }
};