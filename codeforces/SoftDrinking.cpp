#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k, l, c, d, p, nl, np, ans;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
   int tl = k*l;
   cout<<min(tl/nl, min(c*d, p/np))/n;
    return 0;
}
