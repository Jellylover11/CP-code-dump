#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int j=1; j<=n; j++)
    {
       // cout<<(j*(j+1))/2<<endl;
        if(((j*(j+1))/2)==n)
        {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n"<<endl;
}

