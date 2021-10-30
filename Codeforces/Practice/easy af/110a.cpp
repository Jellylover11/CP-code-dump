#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=0,g=0;
    string s,k;
    cin>>s;
    for(int j=0; j<s.size(); j++)
    {
        if(s[j]=='4' || s[j]=='7')
            n++;
    }
    k=to_string(n);
    for(int l=0; l<k.size(); l++)
    {
        if(k[l]=='4' || k[l]=='7')
            g++;
    }
    if(g==k.size())
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
