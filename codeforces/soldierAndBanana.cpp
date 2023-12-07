#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k, n, w, i, sum=0;
	cin>>k>>n>>w;
	for(i=1;i<=w;i++)
	sum=sum+(i*k);
	(sum<=n)?cout<<0:cout<<(sum-n);
	return 0;
}
