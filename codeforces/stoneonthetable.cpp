#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, i, r=0, g=0, b=0;
	string s;
	cin>>n;
	cin>>s;
	for(i=1;i<n;i++)
	{
		if(s[i-1]==s[i])
		if(s[i]=='R')++r;
		else if(s[i]=='G')++g;
		else if(s[i]=='B')++b;
	}
	cout<<r+g+b;
	return 0;
}
