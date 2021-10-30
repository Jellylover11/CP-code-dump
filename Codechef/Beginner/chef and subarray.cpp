#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int ans=0;
        for(int i=0; i<n; i++)
        {
            int s=0,p=1;
            for(int j=i; j<n; j++)
            {
                s +=a[j];
                p *=a[j];
                if(s==p)
                    ans++;
                }
        }
        cout<<ans<<endl;
    }
}
