#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c, t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
	int possible_ones = (a + b + c) % 2 == 0 && min({a, b, c}) > 0 ? 1 : 0;
        int possible_twos = (a + b + c) % 2 == 0 && min({a, b, c}) > 0 ? 1 : 0;
        int possible_threes = (a + b + c) % 2 == 0 && min({a, b, c}) > 0 ? 1 : 0;

        cout << possible_ones << " " << possible_twos << " " << possible_threes <<"\n";
	}
	return 0;
}

