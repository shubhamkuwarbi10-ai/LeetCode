class Solution {
public:
    bool primeHai(int n){
        if (n <= 1) return false;
        
        for (int i = 2 ; i*i<=n ;i++){
            if (n % i == 0) return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int count  = 0;
        
        while (left <= right){
            int setbit = __builtin_popcount(left);
            if (primeHai(setbit)) {
                count++;
            }
            left++ ;
        }
        return count ; 
    }
};