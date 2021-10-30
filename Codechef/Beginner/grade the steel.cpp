#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,c,ans=0;
        double b;
        cin>>a>>b>>c;
        if(a>50)
            ans++;
        if(b<0.7)
            ans++;
        if(c>5600)
            ans++;

        if(ans==3)
            cout<<"10"<<endl;
        else if(a>50 && b<0.7)
            cout<<"9"<<endl;
        else if(c>5600 && b<0.7)
            cout<<"8"<<endl;
        else if(a>50 && c>5600)
            cout<<"7"<<endl;
        else if(ans==1)
            cout<<"6"<<endl;
        else
            cout<<"5"<<endl;
    }
}

