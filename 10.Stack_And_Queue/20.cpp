/*Stack using two queues */

void QueueStack :: push(int x)
{
        if(q1.empty()) q1.push(x);
        else{
            while(q1.empty()!=true){
                q2.push(q1.front());
                q1.pop();
            }
            q1.push(x);
            while(q2.empty()==false){
                q1.push(q2.front());
                q2.pop();
            }
        }
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
    if(q1.empty()) return -1;
       int i=q1.front();
        q1.pop();
        return i;
}