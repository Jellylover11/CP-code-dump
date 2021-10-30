#include <bits/stdc++.h>
using namespace std;

bool palin(string m) {

  string k;
  k=m;
  reverse(m.begin(),m.end());
  if(k==m) return true;
  else return false;
}

bool mirror(string h) {

int j;
int count=0;
j=h.size();
for(int y=0;y<j;y++)
 {
   if( h[y]=='A'||h[y]=='H'|| h[y]=='I'||h[y]=='M'||h[y]=='O'||h[y]=='T'||h[y]=='U'||h[y]=='V'||h[y]=='W'||h[y]=='X'||h[y]=='Y' )
   count++;
 }
 if(count==j) return true;
 else return false;
 }

int main()
 {

   int t;
   cin>>t;
   for(int j=0;j<t;j++)
    {

      string s;
      cin>>s;
      if(palin(s)==1 && mirror(s)==1) cout<<"yes\n";
      else cout<<"no\n";
      }
    }
