class Solution {
public:
    int closestTarget(vector<string>& words, string target, int si) {
        vector<int> freq;
        int n = words.size();
        for (int i = 0 ; i < n ;i++){
            if (words[i] == target) freq.push_back(i);
        }

        if (freq.empty()) return -1;

        int md = INT_MAX;
        int t = 0;
        for (int i : freq){
            t = abs(si - i);
            md = min({t , (n - t) ,md}); 
        }

        return md;
    }
};