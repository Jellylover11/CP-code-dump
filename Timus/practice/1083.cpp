#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <string>

using namespace std;

int main()
 {
   int a,b,sum;
   sum=1;
   string x;
   cin>>a>>x;
   b=x.size();
   while(a>1)
    {
      sum=a*sum;
      a=a-b;
      }
      cout<<sum;
   }
