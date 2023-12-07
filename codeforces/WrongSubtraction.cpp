#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k, i;
	cin>>n>>k;
	for(i=0;i<k;i++)
	{
		if(n%10!=0)
		{
			n=n-1;
		}
		else
		{
			n=n/10;
		}
	}
	cout<<n;
	return 0;
}
