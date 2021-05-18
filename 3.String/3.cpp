//Print all the duplicates in the input string

#include<bits/stdc++.h>
using namespace std;
typedef long long int ln;
void fun()
{
	string s;
	
	getline(cin,s);
	int check[256]={0};
	for(int i=0;i<s.length();i++)
		check[s[i]]++;
	cout<<"Char Repeated  = ";
	for(int i=0;i<256;i++)
		if(check[i]>1)
			{cout<<char(i)<<"  ->  "<<check[i]<<" times\n";}
 }

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
		fun();
	return 0;
}