#include <bits/stdc++.h>

using namespace std;

int main()
 {
   int n;
   cin>>n;
   string s[120];
   char a[120];
   for(int j=0;j<n;j++)
     {
       cin>>s[j];
       }
    /* char b[26]={a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z};
    int a[26]; */

    for(int j=0;j<n;j++)
     {
       s[j][1]=a[j];
       }
       sort(a,a+n);

       for(int p=0;p<n;p++)
       {
           cout<<a[p]<<endl;
       }
   }
