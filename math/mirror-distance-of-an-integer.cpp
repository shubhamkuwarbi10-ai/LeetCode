class Solution {
public:
    int mirrorDistance(int n) {
        int t = n;
        string s = to_string(t);
        reverse(s.begin() ,s.end());
        int rev = stoi(s);

        return abs(n - rev);
    }
};