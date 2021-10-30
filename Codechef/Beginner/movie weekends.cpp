#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int l[n],r[n];
        for(int i=0; i<n; i++)
            cin>>l[i];
        for(int i=0; i<n; i++)
            cin>>r[i];
        int prod=0,ind=0,ma;
        for(int j=0; j<n; j++)
        {
            if(l[j]*r[j]>prod)
            {
                prod=l[j]*r[j];
            }
        }
        for(int j=0; j<n; j++)
        {
            if(l[j]*r[j]==prod)
            {
                if(r[j]>ind)
                {
                    ind=r[j];
                    ma=j;
                }
            }
        }
        cout<<ma+1<<endl;
    }
}

