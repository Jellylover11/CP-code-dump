#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x;
        cin>>n;
        long long a[n];
        for(int j=0; j<n; j++)
        {
            cin>>a[j];
        }
        x=*min_element(a,a+n);
        cout<<((n-1)*x)<<endl;
    }
}
