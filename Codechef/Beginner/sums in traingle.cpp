#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    for(int p=0; p<t; p++)
    {
        int q;
        cin>>q;
        int a[q][q];
        for(int j=0; j<q; j++)
        {
            for(int k=0; k<=j; k++)
            {
                cin>>a[j][k];
            }
        }
        for(int j=q-1; j>=0; --j)
        {
            for(int k=0; k<j; ++k)
            {
                if(a[j][k] > a[j][k+1])
                {
                    a[j-1][k]+=a[j][k];
                }

                else
                {
                    a[j-1][k]+=a[j][k+1];
                }
            }
        }
        cout<<a[0][0]<<endl;

    }
}
