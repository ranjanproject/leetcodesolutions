class MyQueue {
    stack<int> s1;
    stack<int> s2;
public:
    /** Initialize your data structure here. */
    MyQueue() {
      while(!s1.empty())s1.pop();
      while(!s2.empty())s2.pop();
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        s1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
       while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int t=s2.top();
        s2.pop();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        } 
        return t;
    }
    
    /** Get the front element. */
    int peek() {
        
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int t=s2.top();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return t;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        if(s1.empty())return true;
        else return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */