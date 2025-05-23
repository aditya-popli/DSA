#include <climits>
class MinStack {
public:
    stack<int> s;
    stack<int> ms;
    int mini = INT_MAX;
    MinStack() {
        
    }
    void push(int val) {
        this->mini = min(val, mini);
        this->s.push(val);
        this->ms.push(mini);        
    }
    void pop() {
        this->s.pop();
        this->ms.pop();
        if (!ms.empty())
            mini = ms.top();
        else
            mini = INT_MAX;
    }
    int top() {
        return this->s.top();
    }
    int getMin() {
        return this->ms.top();        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
