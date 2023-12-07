// Include the necessary header files
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    // Optimize input/output operations
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t; // Read the number of test cases

    while(t--)
    {
        ll n, k;
        cin>>n>>k; // Read the values of n and k

        string s;
        cin >> s; // Read the string s

        ll moves = 0;
        for (ll i = 0; i < n;) {
            if (s[i] == 'B') {
                i += k; // Move to the next 'B' position after skipping k characters
                moves++; // Increment the number of moves
            } else {
                i++; // Move to the next character
            }
        }

        cout << moves << "\n"; // Print the number of moves for the current test case
    }

    return 0;
}