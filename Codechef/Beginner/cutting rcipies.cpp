#include <bits/stdc++.h>

using namespace std;

   int gcd(int a,int b)
{
if(a==0) return b;
return gcd(b%a,a);
}

int main()
 {
   int n;
   cin>>n;
  while(n--)
   {
     int ar[100]={0},i=0,t;
     cin>>t;
     while(t--)
      {
        cin>>ar[i++];
        }
        int ans=ar[0];

       for(int j=1;j<i;j++)
        {
          ans=gcd(ans,ar[j]);
          }

        if(ans!=1)
         {
           for(int p=0;p<i;p++)
           cout<<ar[p]/ans<<" ";
           }

         else
         {
           for(int p=0;p<i;p++)
           cout<<ar[p]<<" ";
           }

          cout<<endl;
   }
   }
