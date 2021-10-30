#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

double buf[128 * 1024];
int main()
 {
   int i=0;
   unsigned long long n;

   while(scanf("%llu",&n)!=EOF)
    {
      buf[i++]= (double)sqrt(n*1.0);
      }
     for(; --i>=0;)
      {
        printf("%.4lf\n", buf[i]);
        }
   }
