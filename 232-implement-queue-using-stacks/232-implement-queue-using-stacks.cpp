class MyQueue {
public:
    stack<int> stk;
    MyQueue() {
        
    }
    
    void push(int x) {
        if (stk.size() == 0) {
            stk.push(x);
            return;
        }
        int temp = stk.top();
        stk.pop();
        push(x);
        stk.push(temp);
    }
    
    int pop() {
        int temp = stk.top();
        stk.pop();
        return temp;
    }
    
    int peek() {
        return stk.top();
    }
    
    bool empty() {
        return stk.empty();
    }
};
