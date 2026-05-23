class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string res = "";
        unordered_map<int , string> mpp;
        int n = nums.size();
        int ans ;

        for (int i = 0 ;i<n ;i++){
            // converts bitstring to int
            int val = stoi(nums[i] ,nullptr ,2);
            mpp[val] = nums[i];
        }

        for (int i = 0 ;i<pow(2 ,n) ;i++){
            if (mpp[i] == ""){
                ans = i;
                break; 
            }
        }

        // converts int to bit string of the same size as earlier
        for (int i = n-1 ;i >= 0 ;i--){
            res += ((ans >> i) & 1) ? '1' : '0';
        }
        return res;
    }
};