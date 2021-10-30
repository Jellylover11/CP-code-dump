#include <bits/stdc++.h>
using namespace std;

int main()
  {
    string s;
    int up=0,down=0;
    cin>>s;
    for(int j=0;j<s.size();j++)
      {
        if(isupper(s[j]))
            up++;
            else down++;
            }

         if(up>down)
           {
             for(int t=0;t<s.size();t++)
              s[t]=toupper(s[t]);
              }
           else
             {
              for(int t=0;t<s.size();t++)
                s[t]=tolower(s[t]);
                }
    cout<<s;
    }
