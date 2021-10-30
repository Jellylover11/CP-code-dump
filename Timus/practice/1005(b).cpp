#include <bits/stdc++.h>


using namespace std;
int n;
int sum=0;
int ans;
int arr[22];

int main()
 {
   cin>>n;
   for(int j=0;j<n;j++)
    {
      cin>>arr[j];
      sum=sum+arr[j];
   }

  ans=sum;
  int mem[(1<<n)+10];

  mem[0]=0;

  for(int i=0;i<n;i++)
   {
     for(int mask =1<<i; mask< 1<<(i+1); mask++)
      {
        mem[mask]= mem[mask ^ (1<<i)]+ arr[i];
        ans = min(ans, abs(sum-(mem[mask]*2)));
        }
       }
   cout<<ans;
   }
