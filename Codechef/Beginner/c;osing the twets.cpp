#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,counter=0;
    cin>>n>>k;

    bool istru[n]= {0};

    string s;
    for(int j=0; j<k; j++)
    {
        cin>>s;
        if(s=="CLOSEALL")
        {
            memset(istru,0,sizeof(istru));
         counter=0;
        }
        else
        {
            int x;
            cin>>x;
            if(istru[x-1]==0)
            {
                istru[x-1]=1;
                counter++;
            }
            else
            {
                istru[x-1]=0;
                counter--;
            }
        }
        cout<<counter<<endl;
    }
}
