#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, i;
	int n1=0, n2=0, n3=0;
	string s;
	cin>>s;
	for(i=0;i<s.length();i++)
	{
		if(s[i] == '1'){
			n1++;
		}
		else if(s[i]=='2')
			n2++;
		else if(s[i]=='3')
			n3++;
	}
	
	string sol = "";
	for(n=0;n<n1;n++)
	{
		sol = sol+"1+";
	}
	for(n=0;n<n2;n++)
	{
		sol = sol+"2+";
	}
	for(n=0;n<n3;n++)
	{
		sol = sol+"3+";
	}
	sol = sol.substr(0, sol.length()-1);
	cout<<sol;
	cout<<sol;
}	

