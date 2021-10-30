#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,p,ans=0;
        cin>>n;

       while(n)
       {
        p=n%10;
        ans=ans*10+p;
        n=n/10;
       }
       cout<<ans<<endl;


    }

}
