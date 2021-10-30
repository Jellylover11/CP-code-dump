#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int t,I=0,N=0,Y=0;
        cin>>t;
        string s;
        cin>>s;
        for(int j=0; j<t; j++)
        {
            if(s[j]=='I')
                I++;
            else if(s[j]=='N')
                N++;
            else
                Y++;
        }
        if(Y>0)
            cout<<"NOT INDIAN\n";
        else if(I>0)
            cout<<"INDIAN\n";
        else
            cout<<"NOT SURE\n";
    }
}
