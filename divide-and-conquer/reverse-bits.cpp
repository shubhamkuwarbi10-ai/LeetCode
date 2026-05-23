class Solution {
public:
    int reverseBits(int n) {
        bitset<32> b(n);
        string s = b.to_string();
        reverse(s.begin() ,s.end());
        long long x = stoll(s ,nullptr ,2);
        return (int)x;
    }
};