class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;

        for (int i = 0 ; i< nums.size(); i++){
            if (nums[i] >= 0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }

        if (neg.size() == 0) {
            for (int i = 0 ; i < pos.size(); i++){
                pos[i] = pos[i]*pos[i];
            }
            return pos;
        }

        if (pos.size() == 0){
            for (int i = 0 ; i < neg.size() ; i++){
                neg[i] = neg[i]*neg[i];
            }
            reverse(neg.begin() , neg.end());
            return neg ;
        }

        int i = 0 , j = 0 ,id = 0 , p = 0 , q = 0 ;
        while (p < pos.size()){
            pos[p] = pos[p]*pos[p];
            p++;
        }
        while (q < neg.size()){
            neg[q] = neg[q]*neg[q];
            q++;
        }
        reverse(neg.begin() , neg.end());
        while (i < pos.size() and j < neg.size()){
            if (pos[i] <= neg[j]){
                nums[id++] = pos[i++];
            }
            else nums[id++] = neg[j++];
        }

        while (i < pos.size()){
            nums[id++] = pos[i++];
        }

        while(j < neg.size()){
            nums[id++] = neg[j++];
        }
        return nums;
    }
};