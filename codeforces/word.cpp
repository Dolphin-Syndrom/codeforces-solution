#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int i, upper=0, lower=0;
	string s;
	char c;
	cin>>s;
	for(i=0;i<s.length();i++)
	(isupper(s[i]))?upper++:lower++;
	if(upper>lower)
	{
		for(i=0;i<s.length();i++)
		{
			c = toupper(s[i]);
			cout<<c;
		}
	}
	else
	{
		for(i=0;i<s.length();i++)
		{
			
			c = tolower(s[i]);
			cout<<c;
		}
	}
		return 0;
	
}
	
	

	
