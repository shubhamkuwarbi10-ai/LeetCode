class Solution {
public:
    string trimTrailingVowels(string s) {
        string res = "";
        int count = 0;
        int tv = 0;
        
        for (int i = s.size()-1 ;i>=0 ;i--){
            if (count == 0){
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                    tv++ ;
                }
                else {
                    count++;
                }
            }
        }

        return s.substr(0 ,s.size()-tv);
    }
};