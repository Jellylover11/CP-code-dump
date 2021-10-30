#include <bits/stdc++.h>
using namespace std;

int fac(int x)
{
   int i,j,a[200]= {},temp=0,m=1,f;

    a[0]=1;

    for(i=1; i<=x; i++)
    {
        for(j=0; j<m; j++)
        {
            f=(a[j]*i+temp);
            a[j]=f%10;
            temp=f/10;
        }
        while(temp!=0)
        {
            a[j]=temp%10;
            temp=temp/10;
            m++;
            j++;
        }
    }
    for(i=m-1; i>=0; i--)
        cout<<a[i];
    return 0;
}


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int k=0; k<n; k++)
    {
        int p;
        cin>>p;
        fac(p);
        cout<<endl;
    }
}


