class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> stk;
        for (auto s : logs){
            if (s == "../"){
                if (!stk.empty()) stk.pop();
            }
            else if (s == "./"){
                continue;
            }
            else {
                stk.push(s);
            }
        }

        int c = 0;
        while (!stk.empty()){
            stk.pop();
            c++;
        }
        return c;
    }
};