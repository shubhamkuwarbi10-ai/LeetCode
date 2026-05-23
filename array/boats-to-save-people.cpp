class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int l = 0 , r = people.size() -1 ;
        int boat = 0;
        
        sort(people.begin() ,people.end());

        if (people[0] > limit/2) return r+1;
        
        while (l <= r){
            int sum = people[r] + people[l];
            if (l != r){
                if (sum <= limit) {
                    boat++;
                    l++;
                    r--;
                }
                else{
                    boat++;
                    r--;
                }
            }
            else {
                boat++;
                l++;
                r--;
            }
        }
        return boat;
    }
};