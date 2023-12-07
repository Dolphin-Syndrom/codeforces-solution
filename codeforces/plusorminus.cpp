#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t, a, b, c, i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>a>>b>>c;
		(c==a+b)?cout<<"+"<<"\n":cout<<"-"<<"\n";
	}
	return 0;
}
	
