/*225. Implement Stack using Queues*/
class MyStack {
public:
    queue<int> q1,q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
      
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
       
    }
    
    int pop() {
        
        int t=q1.front();
        q1.pop();
        return t;
    }
    
    int top() {
        return q1.front();
        
    }
    
    bool empty() {
        if(q1.size()==0) return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */