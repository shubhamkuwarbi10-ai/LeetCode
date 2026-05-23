class Solution {
public:
    bool checkOnesSegment(string s) {
        int count = 0;
        for (int i = 0 ;i<s.size() ;i++) {
            if (s[i] == '1') count++;
        }

        if (count == 1) return true;

        else {
            for (int i = 0 ;i<s.size()-1 ;i++){
                if (s[i] == '0' && s[i+1] == '1') return false; 
            }
        }
        return true;
    }
};