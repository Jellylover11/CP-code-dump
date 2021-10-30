#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l,b,a,p;
    cin>>l>>b;
    a=l*b;
    p=2*(l+b);
    if(a==p)
    {
        cout<<"Eq"<<endl;
        cout<<a<<endl;
    }

    else if(a>p)
    {
        cout<<"Area"<<endl;
        cout<<a<<endl;
    }
    else
    {
        cout<<"Peri"<<endl;
        cout<<p<<endl;
    }

}
