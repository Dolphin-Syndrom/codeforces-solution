#include<iostream>
using namespace std;
int main()
{
	int n, k, i, c=0, a[100];
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	if(a[i] > 0 && a[i] >= a[k - 1]) c++;
	}
	cout<<c<<endl;
}
