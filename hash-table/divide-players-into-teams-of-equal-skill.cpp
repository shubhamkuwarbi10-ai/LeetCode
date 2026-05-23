class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int low = 0 , high = skill.size()-1;
        long sum = 0;
        vector<pair<int,int>> res;
        while( low < high){
            long s = skill[low] + skill[high];
            if (sum == 0 ) {
                sum = s;
                res.push_back({skill[low] ,skill[high]});
            }
            else if (s != sum) return -1;
            else {
                res.push_back({skill[low] ,skill[high]});
            }
            low++ ;
            high-- ;
        }
        long long ans = 0;
        int i = 0;
        while (i < res.size()){
            ans = ans + res[i].first*res[i].second;
            i++;
        }
        return ans;
    }
};