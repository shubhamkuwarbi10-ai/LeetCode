class Solution {
public:
    int minimumDeletions(string s) {
        int cost = 0 ,n = s.size();
        stack<char> stk;
        for(int i = n-1 ; i>-1 ;i--){
            if (s[i] == 'b' && !stk.empty() && stk.top() == 'a') {
                stk.pop();
                cost+=1;
            }
            else stk.push(s[i]);
        }
        return cost;
    }
};