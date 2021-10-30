#include <bits/stdc++.h>
using namespace std;

int main()
 {
   string s;
   cin>>s;
   for(int t=0;t<s.size();t++)
   {
     if(s[t]>='a' && s[t]<='z')
     {
         s[t]=s[t]-'a'+'A';
     }
     else s[t]=s[t];
   }
   cout<<s<<endl;
   return 0;
   }
