class Solution {
public:
    char findTheDifference(string s, string t) {
        char res = 0;
        char xor1 = 0 , xor2 = 0;
        for (int i = 0 ;i<s.size() ;i++){
            xor1 ^= s[i];
        }

        for (int i = 0 ;i<t.size() ;i++){
            xor2 ^= t[i];
        }

        res = xor1 ^ xor2;
        return res;
    }
};