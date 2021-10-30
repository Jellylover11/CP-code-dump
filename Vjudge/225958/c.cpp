#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   for(int k=1;k<t+1;k++)
    {
    int m,h;
    cin>>m;
    h=m%8;
    if(h==0) printf("%dSL\n",m-1);
    else if(h==1) printf("%dLB\n",m+3);
    else if(h==2) printf("%dMB\n",m+3);
    else if(h==3) printf("%dUB\n",m+3);
    else if(h==4) printf("%dLB\n",m-3);
    else if(h==5) printf("%dMB\n",m-3);
    else if(h==6) printf("%dUB\n",m-3);
    else if(h==7) printf("%dSU\n",m+1);
    }

  }
