#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll i;
	string s1, s2;
	cin>>s1>>s2;
	for(i=0;i<s1.size();i++)
	{
	if(s1[i]>='a')
	{
		s1[i] = s1[i] - 32;
	}
	if(s2[i]>='a')
	{
		s2[i] = s2[i] - 32;
	}
	}
	for(i=0;i<s1.size();i++)
	{
		 if(s1[i]>s2[i])
                {
                    cout<<"1\n";
                    return 0;
				}
            if(s2[i]>s1[i])
                {
                    cout<<"-1\n";
                    return 0;
                }

    }
        cout<<"0\n";
	return 0;
}

