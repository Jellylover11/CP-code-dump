#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        int arr[n];
        for(int j=0; j<n; j++)
        {
            cin>>arr[j];
        }

        for(int y=0; y<n; y++)
        {
            if(arr[y]%2 != 0)
                count++;
        }

        if(count==n && count%2!=0)
        {
            cout<<"YES"<<endl;
        }
       else if(count==n && count%2==0)
       {
           cout<<"NO"<<endl;
       }

       else if(count%2!=0 && (n-count)>0 && count>0)
       {
           cout<<"YES"<<endl;

       }
       else cout<<"NO"<<endl;
    }
}
