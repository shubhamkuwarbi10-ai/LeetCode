class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int sum = 0;
        unordered_map<char , int>mpp;
        for (int i = 0 ;i<s.size() ;i++) mpp[s[i]] = i;

        for (int i = 0 ;i<t.size() ;i++){
            sum += abs(i - mpp[t[i]]);
        }
        
        return sum;
    }
};