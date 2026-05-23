class Solution {
public:
    string addStrings(string num1, string num2) {
        string res = "";
        int i = num1.size()-1 , j = num2.size()-1;
        int n , carry = 0 ;
        stack<char> stk;


        while (i >= 0 && j >= 0){
            n = (num1[i]-'0') + (num2[j]-'0');
            if (carry == 0){
                if (n != 0) {
                    if (int(log10(n)+1) != 1) carry = 1;
                }
                stk.push(n%10 + '0');
                i--;
                j--;
            }
            else {
                n += 1;
                carry = 0;
                if (int(log10(n)+1) != 1) carry = 1;
                stk.push(n%10 + '0');
                i--;
                j--;
            }
        }

        while (i >= 0){
            n = num1[i]-'0' + carry;
            carry = 0;
            if (n != 0){
                if (int(log10(n)+1) != 1) carry = 1;
            }
            stk.push(n%10 + '0');
            i--;
        }
        while (j >= 0){
            n = (num2[j]-'0') + carry;
            carry = 0;
            if (n != 0){
                if (int(log10(n)+1) != 1) carry = 1;
            }
            stk.push(n%10 + '0');
            j--;
        }

        if (carry == 1) stk.push('1');

        while (!stk.empty()){
            res.push_back(stk.top());
            stk.pop();
        }

        return res;
    }
};