#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, i, count=1;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;++i)
    {          
    if(a[i]!=a[i-1])
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}