#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,l;
        cin>>n>>k;
        string s[n];
        int a[n]= {0};

        for(int j=0; j<n; j++)
            cin>>s[j];

        for(int i=0; i<k; i++)
        {
            cin>>l;
            string s1[l];
            for(int e=0; e<l; e++)
                cin>>s1[e];

            for(int i=0; i<n; n++)
            {
                for(int j=0; j<l; j++)
                {
                    if(s[i]==s1[j])
                    {
                        a[i]=1;
                        break;
                    }
                }
            }

        }
        for(int j=0; j<n; j++)
        {
            if(a[j]==1)
                cout<<"YES ";
            else
                cout<<"NO ";
        }
        cout<<endl;
    }
    return 0;
}
