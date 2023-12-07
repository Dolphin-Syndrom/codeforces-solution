#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int encode(string word)
{
	int val=1, i, n;
	for(i=0;i<word.length();i++)
	{
		val = val * (int(word[i]) - 64);
	}
	return val % 47;
}
int main()
{
	string comet, group;
	cin>>comet;
	cin>>group;
	(encode(comet) == encode(group))?cout<<"GO"<<endl:cout<<"STAY"<<endl;
	}
