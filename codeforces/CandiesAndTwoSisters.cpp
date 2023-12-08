#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2!=0)
        {
            n/=2;
            cout<<n<<"\n";
        }
        else{
            n/=2;
            n--;
            cout<<n<<"\n";
        }
    }
    return 0;
}