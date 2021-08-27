#include<bits/stdc++.h>
using namespace std;
typedef long long int ln;
int getmiddle(stack<int> &st){
	int n=st.size();
	while(st.size()>ceil((float)n/2)) st.pop();
	return st.top();
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
   cout<<"middle = "<< getmiddle(st);
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