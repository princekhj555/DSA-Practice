//Convert a Sentence into its equivalent mobile numeric keypad sequence.
#include<bits/stdc++.h>
using namespace std;
string convert(string s){
	int n=s.size();
	string a[]={"2","22","222",
				"3","33","333",
				"4","44","444",
				"5","55","555",
				"6","66","666",
				"7","77","777","7777",
				"8","88","888",
				"9","99","999","9999"};
	string sol="";
	for(int i=0;i<n;i++)
		if(s[i]==' ') sol+='0';
		else{
			int pos=s[i]-'A';
			sol+=a[pos];
		}
	return sol;	
}
void fun()
{
  string s;
  getline(cin,s);
  cout<<convert(s);
  cout<<endl; 
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