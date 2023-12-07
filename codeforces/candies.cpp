#include<iostream>
using namespace std;
int main(){
	int m, n, i, rem, div;
	cin>>n>>m;
	div=n/m;
	rem=n%m;
	for(i=m;i>0;i--)
	{
		if(rem!=0){
		cout<<div+(i<=rem?1:0);}
		else cout<<div;
		cout<<" ";
	}
}

