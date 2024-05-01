#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		(str == "c" || str == "o" || str == "d" || str == "e" || str == "f" || str == "o" || str == "r"|| str == "s")?cout<<"YES\n":cout<<"NO\n";
	}
	return 0;
}
