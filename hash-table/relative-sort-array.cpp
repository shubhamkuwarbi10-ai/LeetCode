class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> mpp;
        // frequency of the elements
        for (int val : arr1){
            mpp[val]++;
        }

        // using the frequency and then storing elements in arr1
        vector<int> res;
        for (int i = 0 ;i<arr2.size() ;i++){
            if (mpp.find(arr2[i]) != mpp.end()){
                int k = mpp[arr2[i]];
                while (k--) res.push_back(arr2[i]);
            }
        }
        int resSize = res.size();
        unordered_map<int ,int> mpp2;
        for (int val : res){
            mpp2[val]++;
        }

        for (int val : arr1){
            if (mpp2.find(val) == mpp2.end()){
                int j = mpp[val];
                mpp2[val] = mpp[val];
                while (j--){
                    res.push_back(val);
                }
            }
        }
        sort(res.begin()+ resSize  ,res.end() );
        
        return res;
    }
};