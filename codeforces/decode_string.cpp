
#include <bits/stdc++.h>
using namespace std;

int main()
	{
        ios::sync_with_stdio(0);
        cin.tie(0);
        int t;
	    cin >> t;
	while (t--)
	{
		int n ; 
        cin >> n ;
		string txt ;
		cin >> txt ;
		string ans = "";
		for(int i = 0 ; i < n; i++){
			if(i + 2 < n and txt[i+2] == 48 and (i + 3 == n or (txt[i+3] != 48))){
				int temp = (txt[i] - 48) * 10 + txt[i+1] - 49;
				ans += char(temp + 97);
				i += 2;
			}
			else{
				int temp = txt[i] + 48;
				ans += char(temp);
			}
		}
		cout << ans << "\n";
	}
	return 0;
}