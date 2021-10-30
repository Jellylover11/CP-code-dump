#include <bits/stdc++.h>
using namespace std;

int fact(int n)
 {
  if(n==0) return 1;
  else return n*fact(n-1);
  }

int main()
 {

   int t;
   cin>>t;
   for(int j=0;j<t;j++)
    {
      int n;
      cin>>n;
     cout<<fact(n)<<endl;
     }
    }
