class MyStack {
public:
    MyStack() {
        num = 0;
    }
    
    void push(int x) {
        queue.push(x);
        ++num;
    }
    
    int pop() {
        int tmp;
        for (int i = 0; i < num - 1; i++) {
            tmp = queue.front();
            queue.pop();
            queue.push(tmp);
        }
        tmp = queue.front();
        queue.pop();
        --num;
        return tmp;
    }
    
    int top() {
        return queue.back();
    }
    
    bool empty() {
        return queue.empty();
    }

private:
    std::queue<int> queue;
    int num;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */