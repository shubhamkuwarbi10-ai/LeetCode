class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int> stk;
        int n = op.size();
        for (auto s : op){
            if (s == "+"){
                int a = stk.top(); stk.pop();
                int b = stk.top(); stk.pop();
                stk.push(b);
                stk.push(a);
                stk.push(a+b);
            }
            else if (s == "C") stk.pop();
            else if (s == "D") stk.push(stk.top() * 2);
            else stk.push(stoi(s));
        }
        int sum = 0;
        while (!stk.empty()){
            sum += stk.top();
            stk.pop();
        }
        return sum;
    }
};