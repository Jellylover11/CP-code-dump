#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,l=0,q=0;
        string s1,s2;
        cin>>s1>>s2;
        n=s1.length();

        for(int j=0; j<n; j++)
        {
            if(s1[j]!='?' && s2[j]!='?' && s1[j]!=s2[j])
            {
                l++;
            }
            else if (s1[j]=='?' || s2[j]=='?')
            {
                q++;
            }
        }
        cout<<l<<" "<<l+q<<endl;
    }
}



