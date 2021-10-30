#include <bits/stdc++.h>
using namespace std;

int main()
  {
    int n,k;
    int a[120];
    int ans=0;
    cin>>n;
    k=(n/2)+1;
    for(int j=0;j<n;j++)
      {
        cin>>a[j];
        }
      for(int p=0;p<n;p++)
        {
          if(a[p]%2==0) ans++;
          }
         if(ans>=k) cout<<"READY FOR BATTLE\n";
          else cout<<"NOT READY\n";
        }
