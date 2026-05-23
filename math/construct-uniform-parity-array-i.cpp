class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool ans = false;
        int n = nums1.size();
        vector<int> temp;

        if (n == 1) return true;

        for (int i = 0 ;i<n ;i++){
            for (int j = i ;j<n ;j++){
                if (temp.size() == n) return true;
                if (nums1[i]%2 != 0) temp.push_back(nums1[i]);
                else {
                    if ((nums1[i] - nums1[j])%2 != 0) temp.push_back((nums1[i] - nums1[j]));
                }
            }
        }

        for (int i = 0 ;i<n ;i++){
            for (int j = i ;j<n ;j++){
                if (temp.size() == n) return true;
                if (nums1[i]%2 == 0) temp.push_back(nums1[i]);
                else {
                    if ((nums1[i] - nums1[j])%2 == 0) temp.push_back((nums1[i] - nums1[j]));
                }
            }
        }
        return ans;
    }
};