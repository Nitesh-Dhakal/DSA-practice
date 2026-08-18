class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        deque<int>dq;
        for (int i = 0; i < students.size(); i++) {
            dq.push_front(students[i]);
        }
        int counter=0;
        int sandwichIndex = 0;
        while(!dq.empty() && counter < dq.size()){
                if(dq.front()==sandwiches[sandwichIndex]){
                    dq.pop_front();
                    sandwichIndex++;
                    counter=0;
                }
                else{
                    int pick=dq.front();
                    dq.pop_front();
                    dq.push_back(pick);
                    counter++;
                }
        }
        return dq.size();
    }
};