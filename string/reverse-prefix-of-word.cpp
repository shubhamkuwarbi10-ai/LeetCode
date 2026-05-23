class Solution {
public:
    string reversePrefix(string word, char ch) {
        string res="";
        int flag = 0 , index = -1;
        for(int i = 0; i<word.size() ;i++ ){
            if (word[i] == ch) {
                flag = 1;
                index = i;
                break;
            }
        }
        if (flag == 1){
            for (int j = index ;j>=0 ;j--){
                res.push_back(word[j]);
            }
            for (int k = index+1 ;k<word.size() ;k++) res.push_back(word[k]);
            return res;
        }
        return word;
    }
};