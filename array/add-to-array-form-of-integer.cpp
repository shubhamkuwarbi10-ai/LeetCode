class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry = 0 , n;
        int i = num.size()-1;
        stack<int> stk;
        vector<int> res;

        while (k > 0 && i > -1){
            int rem = k % 10;
            k /= 10;
            n = num[i] + rem + carry;
            if (n != 0 && int(log10(n))+1 != 1) carry = 1;
            else carry = 0;
            stk.push(n%10);
            i--;
        }

        while (k > 0){
            int rem = k % 10;
            k /= 10;
            n = rem + carry;
            if (n != 0 && int(log10(n))+1 != 1) carry = 1;
            else carry = 0;
            stk.push(n%10);
        }

        while (i > -1){
            n = num[i] + carry;
            if (n != 0 && int(log10(n))+1 != 1) carry = 1;
            else carry = 0;
            stk.push(n%10);
            i--;
        }

        if (carry == 1){
            stk.push(1);
        }

        while (!stk.empty()){
            res.push_back(stk.top());
            stk.pop();
        }
        
        return res;
    }
};