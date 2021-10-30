#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,x,y,a[100],b[105]={0},mi,ma,count=0;
        cin>>m>>x>>y;

        for(int j=0; j<m; j++)
        {
            cin>>a[j];
            mi=max(0,a[j]-x*y);
            ma=min(100,a[j]+x*y);
            for(int h=mi; h<=ma;h++)
            {
                b[h]=1;
            }
        }
        for(int j=1; j<101; j++)
        {
            if(b[j]==0)
                count++;
        }
        cout<<count<<endl;
    }
}

