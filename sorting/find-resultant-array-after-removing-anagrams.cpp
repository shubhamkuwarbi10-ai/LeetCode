class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> res;
        if (words.size()==1) return words;
        res.push_back(words[0]);
        for (int i=1;i<words.size();i++){
            string prev=words[i-1];
            string current=words[i];
            sort(prev.begin(),prev.end());
            sort(current.begin(),current.end());
            if (prev!=current) {
                res.push_back(words[i]);
            }
        }
        return res;
    }
};