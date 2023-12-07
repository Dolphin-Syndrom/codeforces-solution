#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t, a, b, c;
	cin>>t;
	while(t--){
	cin>>a>>b>>c;
	cout<<(a>b-c%2?"First":"Second")<<"\n";
	}
	return 0;
}
