#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int k = a[0];
    for(int i=1;i<n;i++){
        if(a[i]>k)k=a[i];
    }
    for(int i=0;i<n;i++){
        a[i]=k-a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    cout<<sum;
    return 0;
}