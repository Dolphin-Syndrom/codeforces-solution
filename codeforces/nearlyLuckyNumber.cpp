#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n, count=0;
	cin>>n;
	while(n!=0)
	{
		if(n%10==7 || n%10==4)
		{
			count++;
		}
		n=n/10;
	}
	(count==7 || count==4)?cout<<"YES":cout<<"NO";
	return 0;
}
	
