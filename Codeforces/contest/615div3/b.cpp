#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c,co=0,te=0;
        cin>>n;
        int x[3];
        for(int j=2;j<=sqrt(n);j++)
        {
            if(n%j==0)
            {
                x[co++]=j;
                n/=j;
                te++;
                if(te==2) break;
            }
        }
        if(te==2 && n!=1 && n!=x[0] && n!=x[1] )
        {
            cout<<"YES"<<endl;
            cout<<x[1]<<" "<<x[0]<<" "<<n<<endl;
        }
        else cout<<"NO"<<endl;
     //  else cout<<x[0]<<x[1]<<n<<endl;
    }
}
