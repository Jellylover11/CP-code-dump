#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int n,a=0,b=0,d;
        cin>>s;
        n=s.length();

        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
                a++;
            else
                b++;
        }
       if(a==1 || b==1) cout<<"Yes"<<endl;
       else cout<<"No"<<endl;

    }
}

