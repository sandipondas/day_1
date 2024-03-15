#include<bits/stdc++.h>
#define nl '\n'
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int n;
   cin>>n;
   if(n<10) cout<<"000"<<n<<nl;
   else if(n<100) cout<<"00"<<n<<nl;
   else if(n<1000) cout<<"0"<<n<<nl;
   else cout<<n<<nl;
   return 0;
}