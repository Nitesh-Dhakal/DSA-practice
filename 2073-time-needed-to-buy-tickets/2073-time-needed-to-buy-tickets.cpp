class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int>q;
        int n=tickets.size();
        int timer=0;
        for(int i=0;i<n;i++){
            q.push(i);
        }
        while(q.size()>0){
            int i = q.front();
            q.pop();
            tickets[i]--;
            timer++;
            if(i==k && tickets[i]==0){
                return timer;
            }
            if(tickets[i]>0){
                q.push(i);
            }
        }
        return timer;
    }
};