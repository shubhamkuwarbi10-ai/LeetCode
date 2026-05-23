class Solution {
public:
    string reverseVowels(string s) {
        stack<char> stk;
        string res = s;

        for (int i = 0 ;i<s.size() ;i++){
            char c = tolower(s[i]);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                stk.push(s[i]);
            }
        }

        for (int i = 0 ;i<s.size() ;i++){
            char c = tolower(s[i]);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                s[i] = stk.top();
                stk.pop();
            }
        }

        return s;
    }
};