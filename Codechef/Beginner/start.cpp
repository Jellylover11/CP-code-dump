#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k,x;
        cin>>n>>m>>k;
        int ans[n+1];
        for(int i=1; i<=n; i++)
            ans[i]=0;
        for(int i=0; i<m+k; i++)
        {
            cin>>x;
            ans[x]++;
        }
        int a=0,b=0;
        for(int i=1; i<=n; i++)
        {
            if(ans[i]==0)
                a++;

            if(ans[i]==2)
                b++;
        }
        cout<<b<<" "<<a<<endl;

    }
}
