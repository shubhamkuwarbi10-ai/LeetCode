class Solution {
public:
    int reverse(int x) {
        int temp=x,rem,count=0;
        long long rev=0;
        while (x!=0){
            rem=x%10;
            if (rev>INT_MAX/10 || (rev<INT_MIN/10)) return 0;
            //if (rev<=INT_MIN/10 || (rev==INT_MIN/10 && rem<-8)) return 0;
            rev=rev*10+rem;
            x/=10;
        }
        return (int)rev;
    }
};