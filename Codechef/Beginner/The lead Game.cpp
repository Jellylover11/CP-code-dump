#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int p1,p1t=0,p2,p2t=0;
    int temp=0;
    int max=0,l;
    for(int j=0; j<t; j++)
    {
        cin>>p1>>p2;
        p1t=p1t+p1;
        p2t=p2t+p2;
        temp=p2t-p1t;

        if(max<abs(temp))
        {
            max=abs(temp);
            l=(temp>0) ? 2:1;
        }

    }
    cout<<l<<" "<<max<<endl;
}
