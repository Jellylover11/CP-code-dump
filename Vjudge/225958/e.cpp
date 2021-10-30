#include <bits/stdc++.h>
using namespace std;

int main()
 {
  int N;
  int a[1001];
  cin>>N;
  while(N!=-1)
   {
     int temp=0; int count=0;
     for(int j=0;j<N;j++)
      {
        cin>>a[j];
        temp+=a[j];
        }
      int div=temp/N;

    if(temp%N !=0) cout<<"-1\n";

    else
    {
     for(int i=0;i<N;i++)
      {
       while(a[i]>div)
        {
          a[i]--;
          count++;
          }
         }
        cout<<count<<endl;
       }
      cin>>N;
     }
     return 0;
     }
