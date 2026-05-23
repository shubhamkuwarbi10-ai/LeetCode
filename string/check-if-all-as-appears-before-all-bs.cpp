class Solution {
public:
    bool checkString(string s) {
        int low = 0 , n = s.length();
        while (low < n-1){
            if (s[low] == 'b' && s[low+1] == 'a') return false;
            else low++ ;
        }
        return true;
    }
};