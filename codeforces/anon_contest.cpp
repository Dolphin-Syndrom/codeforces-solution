#include<bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;
int main()
{
	int n, i;
	cin>>n;
	while(n--)
	{
		ll m, k;
		cin>>m>>k;
		vector<ll>v(m);
		for(auto& it:v)
		{
			cin>>it;
		}
		ll c = m-1;
		ll ok = true;
		set<ll>s;
		for(i=0;i<k;i++)
		{
			if(s.count(c)){
			
			break;
		}
			if(v[c]>n){
			ok=false; 
			break;
			}
		s.insert(c);
		c=(c-v[c] + m)%m;
		}
	cout<<(ok?"YES":"NO")<<endl;
	}
	
	
}
