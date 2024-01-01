#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
    ll a, b, c, d, count = 0;
    cin >> a >> b >> c >> d;
    cout<<(a<b)+(a<d)+(a<c)<<"\n";
    }
    return 0;

}