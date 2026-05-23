class Solution {
public:
    long long countCommas(long long n) {
        long long digits = (long long)log10(n) + 1;

        if (digits < 4) return 0;

        long long ans = 0 ,p = 1000;
        while (p <= n){
            ans += (n - p) + 1;
            p *= 1000;
        }

        return ans;
    }
};