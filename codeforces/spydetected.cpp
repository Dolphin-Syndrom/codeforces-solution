#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, index;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[1000];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1])
            {       
                index = a[i];
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]!=index)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}