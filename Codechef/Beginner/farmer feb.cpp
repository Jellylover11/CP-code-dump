#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if(n==1)
        return false;
    for(int r=2; r*r<=n; r++)
    {
        if(n%r==0)
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,p,s;
        cin>>x>>y;
        p=x+y;
        s=p+1;
        while(1)
        {
            if(isprime(s))
                break;
                else
                    s++;
                }
        cout<<s-p<<endl;
    }
}
