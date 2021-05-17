//Reverse an Array

#include<bits/stdc++.h>
using namespace std;
void fun()
{
   int n;
   cin>>n;
   int a[n];
   for (int i = 0; i < n; ++i)
   	cin>>a[i];
   cout<<"Entered array = ";
   for (int i = 0; i < n; ++i)
   	cout<<a[i]<<" ";
   for(int i=0,j=n-1;i<=n/2;i++,j--)
   {
   	int temp=a[j];
   	a[j]=a[i];
   	a[i]=temp;
   }
   cout<<"\nReverse array = ";
   for (int i = 0; i < n; ++i)
   {
   	cout<<a[i]<<" ";
   }
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
		fun();
	return 0;
}