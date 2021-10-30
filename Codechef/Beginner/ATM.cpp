#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  double d;
  cin>>n>>d;

  if(n%5==0 &&((n+.5)<=d) )
      cout<<(d-n-.5)<<endl;
   else cout<<d<<endl;

  }
