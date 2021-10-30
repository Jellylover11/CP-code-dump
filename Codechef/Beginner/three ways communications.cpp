#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x1,y1,x2,y2,x3,y3,r,a,b,c;
        int count=0;
        cin>>r;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        a=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
        b=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
        c=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
        if(r*r>=a)
            count++;
        if(r*r>=b)
            count++;
        if(r*r>=c)
            count++;
        if(count>=2)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
}
