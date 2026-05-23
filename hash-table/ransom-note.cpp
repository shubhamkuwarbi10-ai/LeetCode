class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map<char,int> mpp1;
        unordered_map<char,int> mpp2;

        for (char ch : r) mpp1[ch]++;
        
        for (char ch : m) mpp2[ch]++;

        for (auto it : mpp1){
            if (mpp2.find(it.first) != mpp2.end()){
                if (it.second > mpp2[it.first]) return false;
            }
            else return false ;
        }

        return true ;
    }
};