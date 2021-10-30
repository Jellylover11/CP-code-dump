#include <bits/stdc++.h>
using namespace std;

int main()
 {

   int t;
   cin>>t;
   for(int j=0;j<t;j++)
    {
     int n;
     double a,b,x1=0,x2=0;
     cin>>n>>a>>b;
      for(int k=0;k<n;k++)
       {
         double u;
         cin>>u;
         if(u==a) x1++;
         if(u==b) x2++;
         }
        double t;
        t=((x1*x2)/(n*n));
        printf("%.10lf\n",t);
        }
       return 0;
      }
