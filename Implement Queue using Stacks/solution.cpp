class MyQueue {
public:
    
    stack<int> s; 
    MyQueue() {
    }
    
    void push(int x) {
        if(this->s.empty()){
            this->s.push(x);
            return;
        }
        int top = this->s.top();
        this->s.pop();
        push(x);
        this->s.push(top);        
    }
    
    int pop() {
        if(this->s.empty()){
            return -1;
        }
        int top = this->s.top();
        this->s.pop();
        return top;
    }
    
    int peek() {
        if(this->s.empty()){
            return -1;
        }
        return this->s.top();
    }
    
    bool empty() {
        return this->s.empty();
        
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
