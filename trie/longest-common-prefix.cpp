class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string prefix = "" ;
        int n = strs.size() ,i = 0 ,j = 0;
        int size = strs[0].size();
        int c = 0;
        while (i < size ){
            if (strs[0][0] != strs[n-1][0]) return prefix;
            if (strs[0][j] == strs[n-1][j]){
                prefix = strs[0].substr(0,j+1);
                i++;
                j++;
            }
            else return prefix;
        }
        return prefix;
    }
};