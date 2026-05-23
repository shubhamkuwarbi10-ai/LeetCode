class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char ,int> freq;
        
        for (char ch : s){
            freq[ch]++;
        }

        char ans ;
        int res = -1;
        for (int i = 0 ;i<s.size() ;i++){
            if (freq[s[i]] == 1){
                res = i;
                break;
            }
        }

        
        return res;
    }
};