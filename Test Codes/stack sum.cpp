#include <bits/stdc++.h>

using namespace std;

int main()
 {
  int n;
  cin>>n;
   int sum=0;
   stack<int> meto;
  for(int j=0;j<n;j++)
  {
      int t;
      cin>>t;
      meto.push(t);

        }

   while(!meto.empty())
     {
       sum=sum+meto.top();
       meto.pop();
       }
        cout<<sum<<endl;


   }
