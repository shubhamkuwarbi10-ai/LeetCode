class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        ans += s[0];
        for (int i = 1 ;i<s.size() ;i++){
            if (ans.size() && ans[ans.size()-1] == s[i]) ans.pop_back();
            else ans += s[i];
        }
        return ans;
    }
};