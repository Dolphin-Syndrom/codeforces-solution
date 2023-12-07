#include<bits/stdc++.h>
using namespace std;
	int arr[150];
int main()
{
	int i, n, count=0;
	string s;
	cin>>s;

	n = s.size();
	 for(i=0; i<n; i++){
        arr[s[i]]++;
        if(arr[s[i]]==1)
            count++;
    }
	(count%2==0)?cout<<"CHAT WITH HER!":cout<<"IGNORE HIM!";
    return 0;
}

