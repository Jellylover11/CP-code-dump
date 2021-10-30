#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int j;
    cin>>j;
    for(int p=0; p<j; p++)
    {
        string t;
        int f,ans=0;
        cin>>t;

        f=t.size();

        for(int n=0; n<f; n++)
        {
            if(t[n]=='4')
                ans++;
        }
        cout<<ans<<endl;
    }
}


