#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,x1;
    cin>>t;
    x=t%500;
    x1=(t/500)*1000;
    cout<<((x/5)*5)+x1<<endl;
}
