#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;

  for(int k=0;k<t;k++)
   {
     string g;
     int ans=0;
     cin>>g;
     int p=g.size();
     for(int d=0;d<p;d++)
     {
         ans=ans+g[d]-'0';
     }
     cout<<ans<<endl;
     }



  }
