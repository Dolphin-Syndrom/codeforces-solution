#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long t;
	cin>>t;
	while(t--)
	{
	int i;
	long long n,x;
	cin>>n>>x;
	long long gp[n+1];
	gp[0] = 0;
	for(i=1;i<=n;i++)
	{	
		cin>>gp[i];
	}
	long long vol=0;
	bool flag = 0;
	for(i=0;i<n;i++)
	{
		vol = max(vol, (gp[i+1] - gp[i]));
		flag = 1;
	}
	if(flag)
	{
	long long vol2 = ((x-gp[n])*2);
	vol = max(vol, vol2);
	}
	cout<<vol<<"\n";
}
	return 0;
}
