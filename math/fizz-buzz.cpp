class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res;
        string f = "Fizz" , b = "Buzz" , fb ="FizzBuzz";

        for (int i = 1 ;i<=n ;i++){
            string c = to_string(i);
            if (i%3 == 0 && i%5 == 0 ) res.push_back(fb);
            else if (i%3 == 0) res.push_back(f);
            else if (i%5 == 0) res.push_back(b);
            else res.push_back(c);
        }

        return res;
    }
};