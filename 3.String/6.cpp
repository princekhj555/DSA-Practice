#include<bits/stdc++.h>
using namespace std;

bool isShuffle(string s1,string s2,string res){
	cout<<s1<<"  "<<s2<<" "<<res;
	int l1=s1.size(),l2=s2.size(),l3=res.size();
	if(l3!=l1+l2) return false; 
	int a=0,b=0,x=0;
	while(x<=l3)
	{
		if(a<l1 ||b<l2)
			{
				if(s1[a]==res[x]) a++;
				else if(s2[b]==res[x]) b++;
					else  return false;

				x++;
			}
		else break;
	}
	if(a < l1|| b<l2) {
      return false;
    }
    return true;
}

void fun()
{
   string s1,s2,res;
   getline(cin,s1);
   getline(cin,s2);
   getline(cin,res);
   bool sol=isShuffle(s1,s2,res);
   if(sol)
   		cout<<"Yes\n";
   	else cout<<"No\n";
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t; cin.ignore();
	while(t--)
		fun();
	return 0;
}