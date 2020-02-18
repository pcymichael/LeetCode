class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {}
    
    /** Push element x to the back of queue. */
    void push(int x) {
        index.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        while(!index.empty()){
            top=index.top();
            temp.push(top);
            index.pop();
        }
        temp.pop();
        while(!temp.empty()){
            index.push(temp.top());
            temp.pop();
        }
        return top;
    }
    
    /** Get the front element. */
    int peek() {
        temp=index;
        while(!temp.empty()){
            top=temp.top();
            temp.pop();
        }
        return top;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        if(index.empty())
            return true;
        else
            return false;
    }
private:
    stack<int> index;
    stack<int> temp;
    int top;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
