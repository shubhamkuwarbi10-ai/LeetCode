class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        sort(piles.begin() ,piles.end());
        int Asum = 0 , Bsum = 0;

        for(int i = n-1 ;i>=0 ;i--){
            if (i%2 != 0) Asum += piles[i];
            else Bsum += piles[i];
        }

        return (max(Asum ,Bsum) == Asum);
    }
};