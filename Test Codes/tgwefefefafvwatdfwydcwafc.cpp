#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,l,flag=0;
        cin>>n>>k;
        string s[n];
        int a[n]={ 0 };

        for(int i=0;i<n;i++)
            cin>>s[i];

        for(int i=0;i<k;i++)
        {

           cin>>l;
           string s1[l];

           for(int j=0;j<l;j++)
           cin>>s1[j];

               for(int i=0;i<n;i++)
                {
                    for(int j=0;j<l;j++)
                    {
                        if(s[i]==s1[j])
                        {
                            a[i]=1;
                            break;
                        }
                    }
                }

        }


          for(int i=0;i<n;i++)  {
            if(a[i]==1)
            cout<<"YES ";
            else
            cout<<"NO ";


          }
        cout<<endl;

    }
	// your code goes here
	return 0;
}
