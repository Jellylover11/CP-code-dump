#include <bits/stdc++.h>


using namespace std;

int arr[22];
int ans;
int sum=0;
int n;

int main()
 {
   cin>>n;
    for(int j=0;j<n;j++)
     {
       cin>>arr[j];
       sum=sum+arr[j];
       }
      ans=sum;

      for(int mask=0; mask<(1<<n); mask++)
      {
        int s=0;

        for(int k=0; k<n;++k)
         {
           if((1<<k)&mask) s+=arr[k];
           }
       ans= min(ans, abs(sum-s*2) );
       }
    cout<<ans;
   }
