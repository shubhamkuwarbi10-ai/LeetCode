class Solution {
public:
    
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();

        unordered_map<int ,int> freq1;

        for (int i : nums1) freq1[i]++;
        for (int i : nums2) freq1[i]--;

        int diff = 0;
        for (auto& [val ,cnt] : freq1){
            if (cnt % 2 != 0) return -1;
            if (cnt > 0) diff += cnt;
        }
        
        
        
        return diff/2;
    }
};