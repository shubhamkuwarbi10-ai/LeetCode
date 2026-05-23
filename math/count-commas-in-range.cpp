class Solution {
public:
    int countCommas(int n) {
        int digits = (int)log10(n)+1;
        if (digits < 4) return 0;

        return (n - 1000) + 1;
    }
};