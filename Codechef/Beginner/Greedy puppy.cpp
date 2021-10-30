#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,ans=0;
        cin>>a>>b;
        for(int i=b; i>=1; i--)
        {
            if(a%i>ans)
            {
                ans=a%i;
            }
        }
        cout<<ans<<endl;
    }
}


