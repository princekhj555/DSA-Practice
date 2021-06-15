/*To rotate the matrix by 90 deg clockwise */

#include<bits/stdc++.h>
using namespace std;
typedef long long int ln;

void fun()
{
   int n;
   cin>>n;
   int a[n][n];
   for(int i=0;i<n;i++)
   	for(int j=0;j<n;j++)
   		cin>>a[i][j];

   	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			int temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
		}
	}
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n/2;j++)
		{
			int temp=a[i][j];
			a[i][j]=a[i][n-1-j];
			a[i][n-1-j]=temp;
		}

		cout<<"Rotated Matrix = \n";
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				cout<<a[i][j]<<" "; 
			cout<<endl;
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