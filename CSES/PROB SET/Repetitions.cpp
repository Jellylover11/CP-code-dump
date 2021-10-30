#include <bits/stdc++.h>
using namespace std;

#define ff                first
#define ss                second
#define pii               pair<int,int>
#define vi                vector<int>
#define mp                make_pair
#define rep(i,n)          for (int i = 0; i < n; i++)
#define repo(i,b,n)       for (int i = b; i < n; i++)
#define ll                long long
#define ull               unsigned long long
#define pb                push_back
#define ps                push
#define pf                push_front
#define fastt             ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int32_t main()
{

    fastt;

  string s;
  cin>>s;
  int count=0;
  for(int j=0;j<s.size()-1;j++)
    {
      if(s[j]==s[j+1]) count++;
      else count=0;
    }
 cout<<count<<endl;
    return 0;
}
