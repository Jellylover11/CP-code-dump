#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[6]= {100,50,10,5,2,1};
        int n,ans=0,i=0;
        cin>>n;
        while(n)
        {
            ans += n/a[i];
            n = n%a[i];
            i++;
        }
        cout<<ans<<endl;
    }
}
