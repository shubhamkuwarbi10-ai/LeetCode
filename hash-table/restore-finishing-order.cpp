class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_map<int,int> mpp;
        int n1 = friends.size() , n2 = order.size();
        vector<int> res;

        for (int i = 0 ; i<order.size() ;i++){
            mpp[i] = order[i];
        }
        
        for (int j = 0 ;j <n2 ;j++){
            for (int i = 0 ;i<n1 ;i++){
                if (mpp[j] == friends[i]){
                    res.push_back(mpp[j]);
                }
            }
        }
        return res;
    }
};