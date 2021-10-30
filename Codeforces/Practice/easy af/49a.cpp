#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,a="aeiouyAEIOUY";
    int pos;
    //cin>>s;
    getline(cin,s);
    for(int i=s.length()-2;; i--)
    {
        if(s[i]!=' ')
        {

            pos=a.find(s[i]);
            break;
        }
    }
    if(pos!=string::npos)
        cout<<"YES\n";
    else
        cout<<"NO\n";

}
