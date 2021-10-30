#include <bits/stdc++.h>
using namespace std;

int sum(int p)
{
    return ((p*(p+1))/2);
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,ans=0;
        cin>>a>>b;
        while(a--)
        {
            ans=sum(b);
            b=ans;
        }
        cout<<ans<<endl;
    }
}

