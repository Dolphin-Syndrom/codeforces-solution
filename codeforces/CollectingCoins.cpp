#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a, b, c, n;
        cin >> a >> b >> c >> n;
        ll sum = a + b + c + n;
        if(sum % 3 == 0 && sum / 3 >= max(a, max(b, c)))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}