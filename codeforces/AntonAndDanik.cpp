#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, a=0, d=0;
	char s;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		(s=='D')?d++:a++;
	}
	if(d>a)
	{
		cout<<"Danik";
	}
	else if(a>d)
	{
		cout<<"Anton";
	}
	else
	{
		cout<<"Friendship";
	}
	return 0;
}
