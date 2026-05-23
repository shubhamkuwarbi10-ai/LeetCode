class Solution {
public:
    int heightChecker(vector<int>& h) {
        vector<int> e = h;
        sort(e.begin() ,e.end());

        int count = 0;
        for (int i = 0 ;i<h.size() ;i++){
            if (e[i] != h[i]) count++;
        }
        return count;
    }
};