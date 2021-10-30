#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
 {
   int a,sum,i;
   sum=0;
   cin>>a;
   if(a<=0)
    {
      for(i=a;i<=1;i++)
       {
         sum=sum+i;
         }
        }
      else
       {
         for(i=1;i<=a;i++)
          {
            sum=sum+i;
            }
           }
           cout<<sum;
   }
