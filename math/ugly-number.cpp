class Solution {
public:
    bool isUgly(int n) {
        int num,c=0,p;
        if (n<=0) return false;
        for (int prime : {2,3,5}){
            while(n%prime==0){
                n/=prime;
            }
        }
        return n==1;
    }
};