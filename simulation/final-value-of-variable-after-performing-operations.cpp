class Solution {
public:
    int finalValueAfterOperations(vector<string>& s) {
        int sum = 0;
        for (int i = 0 ;i<s.size() ;i++){
            if (s[i][0] != 'X'){
                if (s[i][0] == '+') sum += 1;
                else if (s[i][0] == '-') sum -= 1;
            }
            else if (s[i][0] == 'X'){
                if (s[i][1] == '+') sum += 1;
                else if (s[i][1] == '-')sum -= 1;
            }
        }
        return sum ;
    }
};