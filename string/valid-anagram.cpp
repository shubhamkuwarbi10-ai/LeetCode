class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mpp1;
        unordered_map<char,int> mpp2;
        if (s.size() != t.size()) return false;
        for (int i = 0 ; i<s.size() ;i++){
            mpp1[s[i]]++;
        }
        for (int i = 0 ; i<t.size() ;i++){
            mpp2[t[i]]++;
        }
        int c = 0;
        for (int j = 0 ;j<t.size() ;j++){
            if (mpp1[t[j]] == mpp2[t[j]]) {
                c++;
            }
        }
        if (c == t.size()) return true;
        return false;
    }
};