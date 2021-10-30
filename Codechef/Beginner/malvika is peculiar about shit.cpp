#include <bits/stdc++.h>
using namespace std;

int main()
 {
   int t;
   cin>>t;
   while(t--)
    {
      string s;
      cin>>s;
      int n,a=0,b=0;
      n=s.length();
      for(int r=0;r<n;r++)
       {
         if(s[r]=='a')
            a++;
            else if(s[r]=='b') b++;
            }
       cout<<min(a,b)<<endl;
       }
     }
