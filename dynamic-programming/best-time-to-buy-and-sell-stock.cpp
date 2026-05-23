class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0],maxprofit=0;
        for (int i=1;i<prices.size();i++){
            if (prices[i]>buy) maxprofit=max(maxprofit,prices[i]-buy);
            else buy=prices[i];
        }
        return maxprofit;;
    }
    
};