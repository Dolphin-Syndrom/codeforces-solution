#include<iostream>
using namespace std;
int main(){
	int n, p, v, t, count = 0;
	cin>>n;
	while(n){
		cin>>p;
		cin>>v;
		cin>>t;
		if(p+t+v>1){
			count++;
		}
	n--;
	}
	cout<<count;
}
