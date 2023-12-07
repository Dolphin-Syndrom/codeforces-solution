#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, h, i;
    cin >> n >> h;
    int a[n];
    int w = 0;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] < h)
            w+=1;
        else
            w+=2;
    }
    cout << w;
    return 0;
}
