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
        int a, b, c;
        cin >> a >> b >> c;
        if(a+b==c || a+c==b || b+c==a) 
           cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}