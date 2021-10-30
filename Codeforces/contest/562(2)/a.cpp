#include <bits/stdc++.h>
using namespace std;

int main()
  {
    int n,a,x,b,y,ans=0;
    cin>>n>>a>>x>>b>>y;

    for(int j=0;j<n;j++)
    {
        if(a==b) ans++;
        if(a==x) break;
        if(b==y) break;
        if(a==n)
        {
            a=0;
        }
        if(b==1)
        {
            b=n+1;
        }
     a++;
     b--;
    }

    if(ans>0) cout<<"YES\n";
    else cout<<"NO\n";

    }
