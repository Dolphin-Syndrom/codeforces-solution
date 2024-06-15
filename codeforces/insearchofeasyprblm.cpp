#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, i, count=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	if(arr[i]==1)
	{
		count++;
	}
	}
	if(count!=0)
	{
		cout<<"HARD";
	}
	else{
		cout<<"EASY";
	}
	return 0;
}
