#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, i, sum=0;
    string s;
    cin>>n;
 while(n--){
    cin>>s;
       if(s=="Tetrahedron")
       {
           sum=sum+4;
       }
       else if(s=="Cube")
       {
           sum=sum+6;
       }
       else if(s=="Octahedron")
       {
           sum=sum+8;
       }
       else if(s=="Dodecahedron")
       {
           sum=sum+12;
       }
       else if(s=="Icosahedron")
       {
           sum=sum+20;
       }
    }
    cout<<sum;
    return 0;
}