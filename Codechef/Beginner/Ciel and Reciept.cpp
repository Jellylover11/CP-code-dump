#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,ans=0,b=2048;
        cin>>n;
        while(n)
        {
            ans=ans+n/b;
            n=n%b;
            b=b/2;
        }
        cout<<ans<<endl;



    }
}
