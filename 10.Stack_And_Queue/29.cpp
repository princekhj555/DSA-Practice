#include<bits/stdc++.h>
using namespace std;

void fun()
{
	int n=0;
	cin>>n;
	vector<int> v1,v2;
  queue<int> q;
  for(int i=0;i<n;i++)
  	{int k; cin>>k;
  	  q.push(k);}
  	  for(int i=0;i<n;i++){
  	  	if(i<n/2) {v1.push_back(q.front()); q.pop();}
  	  		else {v2.push_back(q.front()); q.pop();}
  	  } 
  	  for(int i=0;i<n/2;i++){
  	  	q.push(v1[i]);
  	  	q.push(v2[i]);
  	  }
  	  while(!q.empty()){
		cout<<" "<<q.front();
		q.pop();
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