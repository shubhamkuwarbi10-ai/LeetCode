class Solution {
public:
    bool check(string s){
        int i = 0 , j = s.length()-1;
        while (i < j){
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l = 0 ;int r = s.size()-1;
        int cut = 1;
        while (l < r){
            if (s[l] != s[r]) {
                return check(s.substr(0,l) + s.substr(l+1)) || check(s.substr(0 ,r) + s.substr(r+1));
            }
            l++;
            r--;
        }
        return true;
    }
};