#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,rev;
    cin>>s;
    std::stack<char> st;
    st.push('N');

    for(int n=0; n<s.length(); n++)
    {
        st.push(s[n]);
    }
    for(int j=0; j<s.length(); j++)
    {
        rev+=st.top();
        st.pop();
    }
    cout<<rev<<endl;
}

