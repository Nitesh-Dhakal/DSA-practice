class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        int res=0;
        int sum=0;
        int product=1;
        while(temp>0){
            int digit=temp%10;
            sum+=digit;
            product*=digit;
            temp=temp/10;
        }
        res=sum+product;
        if(n%res==0){
            return true;
        }
        else{
              return false;
        }
    }
};