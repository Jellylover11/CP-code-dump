#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int temp=1;
    while(temp<=b)
    {
       b-=temp;
       if(temp==a)
          temp=1;
       else temp++;
    }
    cout<<b<<endl;
}
