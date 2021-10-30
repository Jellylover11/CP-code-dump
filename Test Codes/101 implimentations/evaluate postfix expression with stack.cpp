#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    std::stack<int> st;
    st.push('N');
    string x;
    cin>>x;
    int a,b;
    for(int i=0; i< x.length(); i++)
    {
        if(x[i]>='0' && x[i]<='9')
            st.push(x[i]-'0');

        else if(x[i]>=42 && x[i]<=47)
        {
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();

            switch(x[i])
            {
            case '+':
                st.push(a+b);
                break;
            case '-':
                st.push(a-b);
                break;
            case '*':
                st.push(a*b);
                break;
            case '/':
                st.push(a/b);
                break;
            }
        }
    }
    int alu=st.top();
    cout<<alu*-1<<endl;
    }
}



