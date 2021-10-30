#include <bits/stdc++.h>

using namespace std;

struct node{
  int id;
  int solve;
  } a[10000000+10];

  bool comp(node p,node q)
   {
     if(p.solve>q.solve) return true;
     else return false;
     }


int main()
 {
   int n;
   cin>>n;
   for(int j=0;j<n;j++)
    {
      cin>>a[j].id>>a[j].solve;
      }
     stable_sort(a,a+n,comp);

     for(int t=0;t<n;t++)
      {
        cout<<a[t].id<<" "<<a[t].solve<<endl;
        }

   }
