class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> count;
        set<int> s;
        for (int i = left ;i<=right ;i++){
            int temp = i;
            int c = 0 ,digits = (int)log10(i) + 1;
            while (temp > 0){
                int rem = temp%10;
                if (rem != 0 && i % rem == 0) c++;
                else{
                    c--;
                }
                temp /= 10;
            }
            if (c == digits) s.insert(i);
        }
        for (auto i : s){
            count.push_back(i);
        }
        return count;
    }
};