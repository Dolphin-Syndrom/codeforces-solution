#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	int n, i;
	cin>>n;
	int a[n];
for(i=0;i<n;i++)
{
	cin>>a[i];
}
sort(a, a+n);
a[0] += 1;
cout<<"vale of a0 is "<<a[0]<<"\n";
ll ans=1;
for(i=0;i<n;i++)
{
	ans*=a[i];
}
cout<<ans<<"\n";
}
return 0;
}
