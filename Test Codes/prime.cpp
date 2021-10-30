#include <bits/stdc++.h>
using namespace std;

void sieve(int a)
 {
   bool prime[a+1];
   memset(prime,true,sizeof(prime));

   for(int p=2;p*p<a;p++)
    {
      for(int i=p*2;i<=a;i+=p)
       prime[i]=false;
       }
     for(int k=2;k<=a;k++)
      {
        if(prime[k])
          cout<<k<<' ';
          }
   }
