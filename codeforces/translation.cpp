#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int i;
	string s, t, rev;
	cin>>s>>t;
	for(i=s.length()-1;i>=0;i--)
	{
		rev += s[i];
	}
	if(t==rev)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
