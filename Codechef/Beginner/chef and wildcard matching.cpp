#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        int p,ans=0;
        cin>>s1>>s2;
        p=s1.length();
        for(int n=0; n<s1.length(); n++)
        {
            if(s1[n]==s2[n])
                ans++;
            else if(s1[n]=='?' || s2[n]=='?')
                ans++;
        }
        if(ans==p)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
