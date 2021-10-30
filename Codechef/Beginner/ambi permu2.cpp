#include <bits/stdc++.h>
using namespace std;

int main()
 {
   int t;
   cin>>t;
   while(t!=0)
    {
        int a[t];
        int b[t];
        int tag=1;
      for(int j=1;j<=t;j++)
      {
          cin>>a[j];
      }
       for(int k=1;k<=t;k++)
       {
           b[a[k]]=k;
       }
      for(int i=1;i<=t;i++)
      {
          if(b[i]!=a[i])
          {
              tag=0;
              break;
          }
      }
      if(tag==0) cout<<"not ambiguous"<<endl;
      else cout<<"ambiguous"<<endl;
      cin>>t;
      }
     }
