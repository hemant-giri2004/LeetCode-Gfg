class MedianFinder {
    priority_queue<int> left;   //max heap
    priority_queue<int, vector<int>, greater<int>> right;   //min heap
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        //adding current number.
        if(left.empty() || num<=left.top())
            left.push(num);
        else
            right.push(num);

        //balancing the heaps
        if(left.size()> right.size()+1){
            right.push(left.top());
            left.pop();
        }else if(right.size()>left.size()){
            left.push(right.top());
            right.pop();
        }
    }
    
    double findMedian() {
        if(left.size() > right.size())
            return left.top();
        else if(right.size() > right.size())
            return right.top();
        else
            return (left.top()+right.top())/2.0;

    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */