#include <bits/stdc++.h>

using namespace std;

int main()
 {
   int n;
   int ans=0;
   int num[105];
   cin>>n;
   for(int j=0;j<n;j++)
    {
      cin>>num[j];
   }

    sort(num,num+n);

    for(int i=0;i*2<n;++i)
      {
        ans+= ((num[i]+2)/2);
        }
cout<<ans<<endl;

}
