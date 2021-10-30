#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,c;
    cin>>n>>c;
    int x[n+7];

    for(int g=0; g<n; g++)
    {
        cin>>x[g];
    }

    int count=0;
    for(int j=0; j<n; j++)
    {
        for(int t=0; t<n; t++)
        {
            if(j==t) continue;
            if(abs(x[j]-x[t])<=c)
                count++;
        }
    }
    cout<<count<<endl;
}
