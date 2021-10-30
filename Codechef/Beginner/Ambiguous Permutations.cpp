#include <bits/stdc++.h>
using namespace std;

int main()
 {

   int t;
   cin>>t;
   while(t)
    {
      int a[t+1];
      int b[t+1];
      int tag=1;
      for(int j=1;j<=t;j++)
       {
         cin>>a[j];
         }
       for(int k=1;k<=t;k++)
        {
          b[a[k]]=k;
          }
       for(int p=1;p<=t;p++)
        {
          if(b[p]!=a[p])
          {
          tag=0;
          break;
          }
        }
       if(tag == 0) cout<<"not ambiguous"<<endl;
       else cout<<"ambiguous"<<endl;

       }
      }
