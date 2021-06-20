#include<bits/stdc++.h>
using namespace std;
typedef long long int ln;
void fun()
{
   string s;
   getline(cin,s);
   int z=0,o=0,count=0;
   for(int i=0;i<s.size();i++)
   {
   	if(s[i]=='0')
   		z++;
   	if(s[i]=='1')
   		o++;
   	if(z==o) {count++;}

   }
   if(count==0)
   	 cout<<-1<<endl;
   	else cout<<count;

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