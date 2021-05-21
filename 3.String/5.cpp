// to check whether one string is the rotaion of another or not e.g      prince ..... incepr
#include<bits/stdc++.h>
using namespace std;
typedef long long int ln;
void fun()
{
   string s1; getline(cin,s1);
   string s2; getline(cin,s2);
   string s3= s1+s2;
   		if (s1.size()==s2.size() && s3.find(s2) != string::npos) 
    	cout << "Yes its the rotaion of 1st string" << '\n';
    else cout<<"No it is not the rotation of 1st string\n";
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