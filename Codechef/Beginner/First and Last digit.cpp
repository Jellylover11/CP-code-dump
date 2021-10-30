#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
    {
      string s;
      cin>>s;
      int t,ans;
      t=s.size();
      ans=s[0]-'0'+s[t-1]-'0';

      cout<<ans<<endl;

      }


  }
