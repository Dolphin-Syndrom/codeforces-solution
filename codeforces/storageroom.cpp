#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void sol() {
    int n, i;
    cin>>n;
    int mat[n + 1][n + 1];
    for (i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> mat[i][j];
        }
    }

    int a[n + 1];
    for (int i = 1; i <=n; i++) {
        int o = (1ll<< 30) - 1;
        for (int j = 1; j <= n; j++) {
            if (i != j) {
                o=(o&mat[i][j]);
            }
        }
        a[i]=o;
    }

    bool ans = true;
    for (int i = 1; i <=n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((a[i] | a[j]) != mat[i][j] and i != j) {
                ans = false;
            }
        }
    }

    cout << (ans ? "YES" : "NO") <<"\n";
    if (ans) {
        for (int i = 1; i <= n; i++) {
            cout << a[i] << " ";
        }
        cout<<"\n";
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        sol();
       
    }
    return 0;
}

