class MedianFinder {
private:
    priority_queue<int>max;
    priority_queue<int, vector<int>, greater<int>> min;
public:
    MedianFinder() {}
    void addNum(int num) {
        if(max.empty() || num<=max.top()){
            max.push(num);
        }
        else{min.push(num);}

        if(max.size()>min.size()+1){
            min.push(max.top());
            max.pop();
        }
        else if(min.size()>max.size()){
            max.push(min.top());
            min.pop();
        }
    }
    
    double findMedian() {
        double res;
        if(max.size()==min.size()){
            res=(max.top()+min.top())/2.0;
        }
        else{
            res=max.top();
        }
        return res;
    }
        
};
