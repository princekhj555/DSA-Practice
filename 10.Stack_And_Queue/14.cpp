/*Reverse a stack using recursion*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ln;
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

void reverse(stack<int> &st){
	if(st.empty())
		return;
	else{
		
		int t=st.top();
		st.pop();
		reverse(st);
		insert_at_bottom(st,t);

	}
}
void fun()
{
   stack<int> st;
   int n,t;
   cin>>n;
   for(int i=0;i<n;i++){
   	cin>>t;
   	st.push(t);
   }
   reverse(st);
   while(!st.empty()){
       cout<<st.top()<<" "; st.pop();
   }
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
		fun();
	return 0;
}