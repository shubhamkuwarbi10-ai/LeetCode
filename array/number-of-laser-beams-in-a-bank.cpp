class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> num;
        int count;

        for (int i=0;i<bank.size();i++){
            count=0;
            for (int j=0;j<bank[i].size();j++){
                if (bank[i][j]=='1'){
                    count++;
                }
            }
            if (count!=0) num.push_back(count);
        }
        if (num.size()<=1) return 0;
        int sum=0;
        for (int i=0;i<num.size()-1;i++){
            sum=sum+num[i]*num[i+1];
        }
        return sum;
    }
};