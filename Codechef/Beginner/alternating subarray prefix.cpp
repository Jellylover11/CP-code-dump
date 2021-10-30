#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];

        long long ans[n]= {0};
        ans[n-1]=1;
        for(int i=n-2; i>=0; i--)
        {
            if(a[i]*a[i+1]<0)
            {
                ans[i]=ans[i+1]+1;
            }

            else
                ans[i]=1;
        }
        for(int i=0; i<n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
