#include<iostream>
using namespace std;
int main()
{
	int n, i;
	cin>>n;
	for(i=1;i<=n;i++){
		(i%2==1)?cout<<"I hate ":cout<<"I love ";
		if(i!=n)
		cout<<"that ";
	}
	cout<<"it";
}
