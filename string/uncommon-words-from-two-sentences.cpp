class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string ,int> words;
        string temp_word = "";
        vector<string> res ;

        for ( int  i = 0;i<s1.size() ;i++){
            if (s1[i] != ' '){
                temp_word.push_back(s1[i]);
            }
            else {
                words[temp_word]++;
                temp_word = "";
            }
        }

        if (!temp_word.empty()) words[temp_word]++;

        temp_word = "";
        
        for ( int  i = 0;i<s2.size() ;i++){
            if (s2[i] != ' '){
                temp_word.push_back(s2[i]);
            }
            else {
                words[temp_word]++;
                temp_word = "";
            }
        }

        if (!temp_word.empty()) words[temp_word]++;

        for (auto it : words){
            if (it.second == 1){
                res.push_back(it.first);
            }
        }

        return res;
    }
};