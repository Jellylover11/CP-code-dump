#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int a[100000];
        cin>>n;
        for(int j=0; j<n; j++)
        {
            cin>>a[j];
        }
        sort(a,a+n);
        cout<<a[0]+a[1]<<endl;
    }
}


