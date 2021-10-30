#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double a,b,c;
        cin>>a>>b;

        if(a>1000) c=0.9*(a*b);

        else c=(a*b);

        printf("%lf\n",c);
    }
}
