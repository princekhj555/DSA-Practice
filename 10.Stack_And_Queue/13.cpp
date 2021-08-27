/*Implement a method to insert an element at its bottom without using any other data structure.*/

void insert_at_bottom(stack<int> &s,int x)
{
    if(s.size()==0)
    {
        s.push(x);
        return;
    }
    
    int tmp=s.top();
    s.pop();
    insert_at_bottom(s,x);
    s.push(tmp);
}