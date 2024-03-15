#include<bits/stdc++.h>
#define nl '\n'
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int a,b,c;
   cin>>a>>b>>c;
   int x=(c+0.5)/a;
   if(x>=1)
   {
      cout<<x*b<<nl;
   }
   else
   {
      cout<<0<<nl;
   }
   return 0;
}