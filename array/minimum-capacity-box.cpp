class Solution {
public:
    int minimumIndex(vector<int>& cap, int itemSize) {
        int res = -1 , val = INT_MAX , n = cap.size();
        for (int i = 0 ;i<n ;i++){
            if (cap[i] >= itemSize){
                val = min(cap[i] ,val);
            }
        }
        
        for (int i = 0 ;i<n ;i++){
            if (cap[i] == val){
                res = i;
                break;
            }
        }
        return res;
    }
};