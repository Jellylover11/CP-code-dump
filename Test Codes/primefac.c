#include <bits/stdc++.h>
using namespace std;

int primefac(int n) {
 int count =0;
 while (n%2 == 0)

{
    count++;
    n = n/2;
}
for (int i = 3; i <= sqrt(n); i = i+2)
{
    while (n%i == 0)
    {
        count++;
        n = n/i;
    }
}
if (n > 2)
    count++;
    return count;
}

int main()
 {
  int t;
  cin>>t;
  int j=primefac(t);
  cout<<j<<endl;
  }
