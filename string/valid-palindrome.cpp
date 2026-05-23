class Solution {
public:
    bool isPalindrome(string s) {
        if (s.size() == 1) return true;
        bool res = true;
        vector<char> st;
        for (auto &c : s){
            c = tolower(c);
            if ((c < 123 && c >= 97) || (c <= 57 && c >= 48)){
                st.push_back(c);
            }
        }
        for (int i = 0, j = st.size()-1; i<st.size()/2 ;i++ ,j--){
            if (st[i] != st[j]){
                return false;
            }
        }
        return res ;
    }
};