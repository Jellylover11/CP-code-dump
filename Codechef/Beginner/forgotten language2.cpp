#include <bits/stdc++.h>
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
        int a[n]= { 0 };

        for(int i=0; i<n; i++)
            cin>>s[i];

        for(int i=0; i<k; i++)
        {
            cin>>l;
            string s1[l];
            for(int j=0; j<l; j++)
                cin>>s1[j];

            for(int i=0; i<n; i++)
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

