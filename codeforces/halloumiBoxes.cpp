#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ans()
{
	ll n, k;
	cin>>n>>k;
	vector<ll>s(n);
	for(auto &it:s)cin>>it;
	(k==1 and !is_sorted(s.begin(), s.end()))?cout<<"NO\n":cout<<"YES\n";
}
int main()
{
	ll t = 1;
	cin>>t;
	while(t--)
	{
		ans(); //abbreviating value
	}
	return 0;
}
