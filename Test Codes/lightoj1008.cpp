#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int a,b,t,y,x;
    cin>>t;
    for(int n=1; n<=t; n++)
    {
        cin>>a;
        double m=ceil(sqrt(a));
        ll d=m*m-a;
        if(d<m)
        {
            y=m;
            x=d+1;
        }
        else
        {
            x=m;
            y=a-(m-1)*(m-1);
        }
        if((int)m%2==0)
        {
            ll t=x;
            x=y;
            y=t;
        }
        printf("Case %d: %d %d\n",n,x,y);
    }
}
