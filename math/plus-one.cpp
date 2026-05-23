class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int s = digits.size() , i;
        if (digits[s-1] < 9) {
            digits[s-1] += 1;
            return digits;
        }
        else if (digits[s-1] == 9){
            if (s == 1) {
                digits[s-1] = 1;
                digits.push_back(0);
                return digits;
            }
            int d = 0 ;
            for (i = s-1;i>=0 ; i--){
                if (digits[i] != 9){
                    digits[i] += 1;
                    break;
                }
                else {
                    digits[i] = 0;
                    d++ ;
                }
            }
            if (d == s){
                digits.push_back(1);
                swap(digits[0],digits[digits.size()-1]);
            }
        }
        return digits;
    }
};