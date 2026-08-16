class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>result;
        int n=temperatures.size();
        vector<int>answer(n,0);
        for(int i=n-1;i>=0;i--){
           while(!result.empty() && temperatures[result.top()] <=      temperatures[i]) {
                result.pop();
           }
           if(!result.empty()){
                answer[i] = result.top() - i;
           }
           result.push(i);
        }
        return answer;
    }
};