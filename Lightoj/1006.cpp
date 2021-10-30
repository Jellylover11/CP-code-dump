#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int g=1; g<=t; g++)
    {

        long long int n,h,d;
        cin>>n;
        h=ceil(sqrt(n));
        d=n-(h-1)*(h-1);

        if(h%2==0)
        {
            if(d>h)
            {
                cout<<"Case "<<g<<": "<<h<<" "<<(1+h*h-n)<<endl;
            }
            else
            {
                cout<<"Case "<<g<<": "<<d<<" "<<h<<endl;
            }
        }
        else
        {
            if(d>h)
            {
                cout<<"Case "<<g<<": "<<(1+h*h-n)<<" "<<h<<endl;
            }
            else
            {
                cout<<"Case "<<g<<": "<<h<<" "<<d<<endl;
            }
        }
    }
}


