#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b)
{
    if(a==0)
        return b;
    return gcd(b%a,a);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        long long d;
        cin>>a>>b;
        c=gcd(a,b);
        d=(a*b)/c;
        cout<<c<<" "<<d<<endl;
    }
}

