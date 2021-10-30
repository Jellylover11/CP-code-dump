#include <bits/stdc++.h>
using namespace std;

int main()
 {
   int t;
   cin>>t;
   while(t--)
    {
      int a,b,c,d;
      cin>>a>>b;
      c=a*b;
      d=__gcd(a,b);
      cout<<(c)/(d*d)<<endl;

      }
    }
