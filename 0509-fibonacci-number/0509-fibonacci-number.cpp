class Solution {
public:
    int f(int n ){
        if(n==0)return 0;
        if(n==1)return 1;
        int result=f(n-1)+f(n-2);
        return result;
    }
    int fib(int n) {
        int r=f(n);
        return r;
    }
};