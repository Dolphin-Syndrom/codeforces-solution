#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, i;
    cin>>n;

    int p, q, space = 0;
   while(n--)
   {
         cin>>p>>q;
         if(q-p >= 2)
         {
              space++;
         }
   }
   cout<<space<<"\n";
    return 0;
}
   