#include <bits/stdc++.h>
using namespace std;

int main()
 {
   int n;
   cin>>n;
   for(int j=0;j<n;j++)
    {
      string g;
      int p=0;
      cin>>g;
      int l=g.size();
      for(int k=0,j=l-1;k<l,j>=0;k++,j-- )
       {
         if(g[k]==g[j]) p++;
         }
        if(l==p) cout<<"wins"<<endl;
        else cout<<"losses"<<endl;
           // cout<<g<<l<<p<<endl;
        }
      }
