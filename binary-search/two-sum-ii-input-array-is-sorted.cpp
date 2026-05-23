class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        int sum=0;
        vector<int> val;
        while (i<j){
            sum=numbers[i]+numbers[j];
            if (sum == target) {
                val.push_back(i+1);
                val.push_back(j+1);
                break;
            }
            else if (sum < target) i+=1;
            else if (sum > target) j-=1;
        }
        return val;
    }
};