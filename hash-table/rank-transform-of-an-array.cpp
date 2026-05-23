class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        priority_queue<int, vector<int>, greater<int>> pq;
        vector<int> res(arr.size());
        int rank = 1;
        for (int i = 0 ;i<arr.size() ;i++){
            pq.push(arr[i]);
        }
        int prev = INT_MAX;
        unordered_map<int ,int> mpp;
        while (!pq.empty()){
            int n = pq.top();
            if (n != prev){
                prev = n;
                mpp[n] = rank;
                rank++;
                pq.pop();
            }
            else pq.pop();
        }

        for (int j = 0 ;j<arr.size() ;j++){
            res[j] = mpp[arr[j]];
        }
        return res;
    }
};