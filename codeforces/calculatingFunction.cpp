#include<iostream>
typedef long long ll;
using namespace std;
int main(){
	ll n;
	cin>>n;
	(n%2==0)?cout<<n/2:cout<<(-(n+1)/2);
}
