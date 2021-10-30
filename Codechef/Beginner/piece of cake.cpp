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
      int a[26],fl=0,temp=0;
      for(int g=0;g<26;g++)
           a[g]={0};

       for(int r=0;r<s.size();r++)
         a[s[r]-97]++;

        temp=a[0];
        for(int i=0;i<26;i++)
          {
            fl=fl+a[i];
            if(temp<a[i])
             {
               temp=a[i];
             }
           }
         if(2*temp==fl)
          cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
        }
      }
