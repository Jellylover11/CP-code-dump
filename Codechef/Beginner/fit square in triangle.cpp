#include <bits/stdc++.h>
using namespace std;

int count(int n)
{
    if(n<=3)
        return 0;
    else
        return ((n-2)/2)+count(n-2);
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        cout<<count(t)<<endl;
    }
}
