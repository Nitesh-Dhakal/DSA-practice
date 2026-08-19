class Solution {
public:
    int getnumber(int n){
        int sum=0;
        while(n>0){
            int digit=n%10;
            sum+=(digit*digit);
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int>res;
        while(n!=1){
            if(res.count(n))return false;
            res.insert(n);
        
        n=getnumber(n);
        }
        return true;
    }
};