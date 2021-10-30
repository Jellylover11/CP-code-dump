#include <bits/stdc++.h>
using namespace std;

int main()
 {
   int t;
   cin>>t;
   while(t--)
    {
      int n,ans=0;
      cin>>n;
      int a[n];
      int a1[n];
      int a2[n];
      int a3[n];
      for(int i=0;i<n;i++)
        cin>>a[i];
      a1[0]=a[0]-0;
      for(int j=1;j<n;j++)
        {
          a1[j]=a[j]-a[j-1];
         }
       for(int i=0;i<n;i++)
         cin>>a2[i];

         for(int i=0;i<n;i++)
           {
           if(a1[i] >= a2[i]) ans++;
            }
            cout<<ans<<endl;
      }
 }
