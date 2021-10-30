#include <bits/stdc++.h>
using namespace std;


int main()
 {
   string s;
   int n,c=0,x,y;
   cin>>n;
   int a[26]={0};

   for(int j=0;j<n;j++)
    {
      cin>>s;
      a[s[0]-'a'] ++;
      }
    for(int p=0;p<26;p++)
      {
        x=a[p]/2;
        y=a[p]-x;

        if(x>1) c+=((x*(x-1))/2);
        if(y>1) c+=(((y-1)*y)/2);
        }
        cout<<c<<endl;

      }
