#include <bits/stdc++.h>
using namespace std;

int main()
 {
  int a[3],b[3];
  int counta=0;int counte=0; int countb=0;
  for(int k=0;k<3;k++)
   {
    cin>>a[k];
    }
   for(int j=0;j<3;j++)
    {
      cin>>b[j];
    }
 for(int n=0;n<3;n++)
  {
    if(a[n]>b[n]) counta++;
    else if(a[n]<b[n]) countb++;
    else counte++;
  }

  cout<<counta<<" "<<countb<<endl;
  }
