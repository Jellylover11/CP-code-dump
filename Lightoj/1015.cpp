#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int g=1; g<=t; g++)
    {
        int a[1000];
        int n,ans=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int q=0; q<n; q++)
        {
            if(a[q]>=0)
            ans+=a[q];
        }
        cout<<"Case "<<g<<": "<<ans<<endl;
    }
}
