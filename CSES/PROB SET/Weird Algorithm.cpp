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

   ll a;
   cin>>a;
   while(true)
   {
     cout << a << " ";
     if (a == 1) break;
     if (a%2 == 0) a/=2;
    else a=a*3+1;


   }
    return 0;
}
