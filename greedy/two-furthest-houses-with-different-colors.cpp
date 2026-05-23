class Solution {
public:
    int maxDistance(vector<int>& col) {
        int n = col.size();
        int diff = INT_MIN;
        for (int i = 0 ;i<n ;i++){
            int t = 0;
            for (int j = 0 ;j<n ;j++){
                t = abs(i - j);
                if (col[i] != col[j]) diff = max(diff ,t);
            }
        }
        return diff;
    }
};