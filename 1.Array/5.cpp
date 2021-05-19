// move all -ve elements to one side (order doesn't matter)
#include<bits/stdc++.h>
using namespace std;

void fun()
{
   int n;
   cin>>n;
   int a[n];
   for (int i = 0; i < n; ++i)
   	cin>>a[i];
   for (int i=0,j=0;i<n;i++)
   {
   		if(a[i]<0)
   			{	if(a[i]!=a[j])
   					swap(a[i],a[j]);
   				j++;
   			}
   }
   for (int i = 0; i < n; ++i)
   {
   	cout<<a[i]<<" ";
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