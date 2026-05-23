class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = s.size();
        vector<char> t;
        for (int i = l-1 ; i>-1 ;i--) t.push_back(s[i]);
        for (int j = 0; j<l ;j++) s[j] = t[j];
    }
};