class MyQueue {
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        stack2.push(x);
        update();
    }
    
    int pop() {
        update();
        int val = stack1.top();
        stack1.pop();
        update();
        return val;
    }
    
    int peek() {
        return stack1.top();
    }
    
    bool empty() {
        return stack1.empty() && stack2.empty();
    }

private:
    std::stack<int> stack1;
    std::stack<int> stack2;
    void update() {
        if (stack1.empty()) {
            while (!stack2.empty()) {
                int val = stack2.top();
                stack1.push(val);
                stack2.pop();
            }
        }
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */