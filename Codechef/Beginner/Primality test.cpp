#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int t=0; t<n; t++)
    {
        int r;
        cin>>r;
        int ans=0,pis=0;
        for(int p=1;p<=r;p++)
        {
            if(r%p== 0)
            {
               pis++;
            }

        }
        if(pis==2) cout<<"yes\n";
        else cout<<"no\n";
    }

}

