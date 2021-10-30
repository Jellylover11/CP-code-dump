#include <bits/stdc++.h>
using namespace std;

bool issign(char c)
{
  if(c=='+' || c== '-' || c== '/' || c=='^' || c=='*')
    return true;
    else return false;
    }
  bool ischar(char c)
   {
       if(c>='a' && c<='z')
         return true;
         else if(c>='0' && c<='9')
           return true;
           else return false;
           }

  void expr(string str)
    {
      std::stack<char> brac;
      std::stack<char> sign;
      string ans;

      int i,j=0;
      char c;
      vector <char> arr;

      for(int i=0;i<str.size();i++)
        {
          if(str[i]=='(')
            {
              brac.push(str[i]);
              }
            else if(ischar(str[i]))
              {
                ans.push_back(str[i]);
                }
              else if(issign(str[i]))
                {
                  sign.push(str[i]);
                  }
      else if(str[i]==')')
        {
          c=sign.top();
          sign.pop();
          brac.pop();
          ans.push_back(c);
          }
          }
         cout<<ans<<endl;
        }




int main()
 {
   int t;
   cin>>t;
   while(t--)
     {
       string f;
       cin>>f;
       expr(f);
     }
   }
