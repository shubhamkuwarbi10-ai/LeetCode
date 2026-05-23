class Solution {
public:
    int totalMoney(int n) {
        if (n==1) return 1;

        int sum=0,q=n/7,r=n%7;

        if (n<=7){
            for (int i=1;i<=n;i++){
                sum=sum+i;
            }
        }

        if (n>7){
            int k=1,p=1;
            for (int j=1;j<=n;j++){
                if (j%7==0){
                    sum=sum+k;
                    p+=1;
                    k=p;
                    continue;
                }
                sum=sum+k;
                k++;
            }
        }
        return sum;

    }
};