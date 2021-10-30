#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[3],n,d;
        cin>>a[0]>>a[1]>>a[2]>>n;

        sort(a,a+3);

        d=(a[2]-a[1])+(a[2]-a[0]);
        n=n-d;

        if(n%3==0 && n>=0)
        {
            cout<<"YES"<<endl;

        }
        else
            cout<<"NO"<<endl;

    }
}

