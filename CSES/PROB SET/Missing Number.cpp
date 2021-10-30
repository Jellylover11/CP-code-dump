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

   ll n,k;
   ll sum=0;
   cin>>n;
   for(int j=0;j<n-1;j++)
    {
      cin>>k;
      sum=sum+k;
    }
    ll tot;
    tot=((n*(n+1))/2);
    cout<<tot-sum<<endl;

    return 0;
}
