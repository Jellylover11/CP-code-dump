#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n[2],k,m;
        cin>>n[0]>>n[1]>>k;
        m=max(n[0],n[1])-min(n[0],n[1]);

        if(m>k)
        {
            cout<<m-k<<endl;
        }
        else
            cout<<"0"<<endl;
    }
}





