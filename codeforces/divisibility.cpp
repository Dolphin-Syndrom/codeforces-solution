#include<iostream>
using namespace std;
int main(){
	int i, t, a, b;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>a>>b;
		(a%b==0)?cout<<0<<endl:cout<<b-(a%b)<<endl;
	}
}
