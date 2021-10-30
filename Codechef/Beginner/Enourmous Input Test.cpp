#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

  int n,k,d;
  int bal=0;
  cin>>n>>k;
  for(int j=0;j<n;j++)
   {
     cin>>d;

     if(d%k==0) {
            bal++;
     }
     }

     cout<<bal<<endl;

  }
