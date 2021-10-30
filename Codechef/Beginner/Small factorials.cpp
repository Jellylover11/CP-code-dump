#include <bits/stdc++.h>
using namespace std;



int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  for(int j=0;j<t;j++)
   {
     int f,b,n,a[200]={},temp=0,m=1;
     cin>>n;
     a[0]=1;
     for(int p=1;p<=n;p++)
     {
         for(b=0;b<m;b++)
         {
           f=(a[b]*p+temp);
           a[b]=f%10;
           temp=f/10;
         }
         while(temp!=0)
         {
             a[b]=temp%10;
             temp=temp/10;
             m++;
             b++;
         }
     }

        for(int q=m-1;q>=0;q--)
            cout<<a[q];
        cout<<endl;
     }



  }
