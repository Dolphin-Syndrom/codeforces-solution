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
        ll r, b, d;
        cin >> r >> b >> d;
       (abs(r - b) <= d * min(r, b))? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}