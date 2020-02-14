class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {}
    
    /** Push element x onto stack. */
    void push(int x) {
        int n=index.size();
        index.push(x);
        while(n-->0){
            index.push(index.front());
            index.pop();
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int x=index.front();
        index.pop();
        return x;
    }
    
    /** Get the top element. */
    int top() {
        return index.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        if(index.size()==0)
            return true;
        else
            return false;
    }
private:
    std::queue<int> index;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
