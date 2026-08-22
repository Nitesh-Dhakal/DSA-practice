class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        stack<int>s;
        int n=0;
        vector<int>res;
        while( n <nums.size()){
            if(nums[n]>0){
                s.push(nums[n]);
            }
            else{
                bool alive=true;
                while(s.size() > 0 && s.top() > 0 && alive == true){
                    if(-nums[n]==s.top()){
                        s.pop();
                        alive=false;
                    }
                    else if(-nums[n]>s.top()){
                        s.pop();
                    }
                    else{
                        alive=false;
                    }
                }  
                if(alive==true){
                    s.push(nums[n]);
                }
            } 
            n++;
        }
        while (!s.empty()) {
            res.push_back(s.top());
            s.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};