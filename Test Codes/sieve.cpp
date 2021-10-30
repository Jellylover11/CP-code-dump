#include<bits/stdc++.h>
using namespace std;
int q[10000];
int sieve(int a)
 {
   bool prime[a+1];
   memset(prime,true,sizeof(prime));

   for(int p=2;p*p<a;p++)
    {
      for(int i=p*2;i<=a;i+=p)
       prime[i]=false;
       }
       int j=0;
      int count=0;
     for(int k=2;k<=a;k++)
      {
        if(prime[k])
          q[j]=k;
          j++;
          count++;
          }
          return count;
   }

  int main()
   {
     int n,i;
     cin>>n;
     i=sieve(n);
     for(int u=0;u<i;u++)
     {
         cout<<q[u]<<endl;
     }
     return 0;
     }

