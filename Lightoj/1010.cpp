#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    for(int g=1; g<=t; g++)
    {
        int a,b,d,ans,x;
        cin>>a>>b;
        d=a*b;

        if(a==1 || b==1)
            ans=d;

        else if(a==2 || b==2)
        {
           if(a==2) x = b;
            else     x =a;
            if(x%4 == 1)      ans = x+1;
            else if(x%4 == 2) ans = x+2;
            else if(x%4 == 3) ans = x+1;
            else if(x%4 == 0) ans = x;
        }
        else if(d%2==0)
            ans=d/2;
        else
            ans=(d/2)+1;
        cout<<"Case "<<g<<": "<<ans<<endl;
    }
}
