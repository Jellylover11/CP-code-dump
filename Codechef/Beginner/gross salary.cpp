#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        double r;
        cin>>r;
        if(r<1500)
            cout<<2*r<<endl;
        else
            cout<<fixed<<setprecision(2)<<(r)+500+(r*0.98)<<endl;
    }
}
