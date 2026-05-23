class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int c = 0;
        vector<int> res (1,0);
        for (int i = 0; i<n ;i++){
            c += gain[i];
            res.push_back(c);
        }
        int m = res[0];
        for (int i = 0 ;i<res.size() ;i++){
            m = max(m ,res[i]);
        }
        return m;
    }
};