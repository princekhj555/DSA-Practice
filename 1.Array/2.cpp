//Find MAX and MIN in an array

#include<bits/stdc++.h>
using namespace std;
typedef long long int ln;
void fun()
{
  int n,max,min;
  cin>>n;
  int a[n];
  cin>>a[0];
  max=min=a[0];
  for (int i = 1; i < n; ++i)
  	{
  		cin>>a[i];
  		if(a[i]>max)max=a[i];
  		if(a[i]<min)min=a[i];
  	}
  	cout<<"array = ";
  	for (int i = 0; i < n; ++i)
  	{
  		cout<<a[i]<<" ";
  	}
  	cout<<"Max = "<<max;
  	cout<<"MIN = "<<min;
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