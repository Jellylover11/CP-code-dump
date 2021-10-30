#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  for(int j=0;j<t;j++)
    {
      int a,b;
      cin>>a>>b;
      if(a>b)
        {
          cout<<a<<" "<<a+b<<endl;
          }
        else
        {
          cout<<b<<" "<<a+b<<endl;
          }
         }

  }
