class Solution {
public:
    int pow(int n){
        if(n==1)return true;
        if (n <= 0) return false;
        if(n%2!=0)return false;
        bool divide=pow(n/2);
        return divide;
    }
    bool isPowerOfTwo(int n) {
        bool call=pow(n);
        return call;
    }
};