#include <bits/stdc++.h>
using namespace std;
int abss(int x)
{
	if(x<0)
		return -x;
	return x;
}
map<char,int> a;
int main()
{
	int ans=0,i,pos,n;
	a['A']=1;
	a['P']=1;
	a['O']=1;
	a['R']=1;
	a['B']=2;
	a['M']=2;
	a['S']=2;
	a['D']=3;
	a['G']=3;
	a['J']=3;
	a['K']=3;
	a['T']=3;
	a['W']=3;
	pos=1;
	cin>>n;
	string s;
	for(i=1;i<=n;i++)
	{
		cin>>s;
		ans=ans+abss(pos-a[s[0]]);
		pos=a[s[0]];
	}
	cout<<ans;
	return 0;

}
