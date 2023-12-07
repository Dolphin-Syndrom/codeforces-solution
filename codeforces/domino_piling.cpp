#include<iostream>
using namespace std;
int domino(int m, int n){
	int result;
	if(m==2)
	return n;
	else if(m%2==0)
	return (m/2)*n;
	else
	return (m/2)*n + (n/2);
}
int main(){
	int a, b;
	cin>>a;
	cin>>b;
	int result = domino(a, b);
	cout<<result;
}
