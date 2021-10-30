#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long t;
  cin>>t;
 int a[t];
  for(long long j=0;j<t;j++)
   {
     cin>>a[j];
     }
    sort(a,a+t);

    for(int i=0;i<t;i++)
     {
       cout<<a[i];
       cout<<endl;
       }



  }
