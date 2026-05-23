class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int ,int> mpp;
        for (int i = 0 ;i < nums.size() ;i++) mpp[nums[i]]++;

        vector<int> a;
        for (auto& [k ,v] : mpp){
            if(v >= 3) a.push_back(k);
        }

        int dist = INT_MAX;

        if (!a.empty()){
            for (int j : a){
                vector<int> t ;
                for (int i = 0 ;i< nums.size() ;i++){
                    if (nums[i] == j) t.push_back(i); 
                }

                for (int i = 0 ;i< t.size() - 2 ;i++){
                    int temp = abs(t[i] - t[i+1]) + abs(t[i+1] - t[i+2]) + abs(t[i+2] - t[i] ) ;
                    dist = min(dist ,temp);
                }
            }
            return dist;
        }
        else return -1;
    }
};