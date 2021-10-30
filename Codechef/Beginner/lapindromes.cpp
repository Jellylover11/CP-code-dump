#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,a1,a2;
        cin>>s;
        int n;
        n=s.length();
        a1=s.substr(0,n/2);

        if(n%2==0)
        {
            a2=s.substr(n/2,n);
        }
        else
            a2=s.substr((n/2)+1,n);


        sort(a1.begin(),a1.end());
        sort(a2.begin(),a2.end());

        if(a1==a2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
