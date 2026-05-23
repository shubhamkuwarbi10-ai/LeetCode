class Solution {
public:
    int f(int n , vector<int>& m){
        if(n == 0 || n == 1) return n ; 

        if(m[n] != -1) return m[n] ; 

        return m[n] = f(n-1 , m) + f(n-2, m) ;
    }
    int fib(int n) {
        vector<int> m(n+1 , -1) ;
        return f(n , m) ;
    }
};