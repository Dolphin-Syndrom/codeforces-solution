#include<bits/stdc++.h>
#define ll long long
#define lli long long int

using namespace std;

int gcd(int a, int b) {
    while (true) {
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;
    }
}

int lcm(int a, int b) {
    int temp = gcd(a, b);
    return temp ? (a / temp * b) : 0;
}

void solve() {
    ll n;
    cin >> n;
    ll a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    ll rem = 0;
    pair<ll, ll> pp[n + 1];
    pp[n] = {0, 1};

    for(int i = n - 1; i >= 0; i--) {
        ll to = pp[i + 1].first;
        ll c = pp[i + 1].second;
        pp[i] = {to + a[i], c};
        pp[i] = max(pp[i], {to + rem + a[i], c + 1});
        rem += a[i];
    }

    cout << pp[0].first << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}

