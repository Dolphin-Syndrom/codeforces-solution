#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, t, i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		(n%3==0)?cout<<"Second\n":cout<<"First\n";
	}
}
