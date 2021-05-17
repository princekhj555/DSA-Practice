//Reverse a String
#include<bits/stdc++.h>
using namespace std;
typedef long long int ln;

void fun()
{ cin.ignore();
  string s;
  getline(cin,s);
  cout<<s<<" ";
  int n=s.length();
        for(int i=0,j=n-1;i<j;i++,j--)
        {
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
  cout<<s;

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
