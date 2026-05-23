class Solution {
public:
    int lengthOfLastWord(string s) {
        int encounter = 0 , n = s.size();
        int len = 0;
        for (int i = n-1 ;i>=0 ;i--){
            if (encounter == 0){
                if (s[i] == ' ') continue;
                else {
                    encounter = 1;
                    len += 1;
                }
            }
            else{
                if (s[i] == ' ') break;
                else len += 1 ;
            }
        }
        return len ;
    }
};