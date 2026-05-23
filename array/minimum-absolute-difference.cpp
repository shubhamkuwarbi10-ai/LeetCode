class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> res;
        sort(arr.begin(),arr.end());
        long min_diff = INT_MAX ,diff;
        for (int i = 0; i<arr.size()-1 ;i++){
            diff = abs(arr[i]-arr[i+1]);
            min_diff = min(diff ,min_diff);
        }
        for (int i = 0; i<arr.size()-1 ;i++){
            diff = abs(arr[i]-arr[i+1]);
            if (diff == min_diff){
                res.push_back({arr[i],arr[i+1]});
            }
        }
        return res;

    }
};