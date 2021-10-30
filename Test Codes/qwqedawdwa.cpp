#include <bits/stdc++.h>
using namespace std;

vector<int> graph[10];
int main(){

    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        int u = s[i] - '0';
        for(int j=i+1; j<s.size(); j++){
            int v = s[j] - '0';
            if(u % 2 == v % 2) graph[u][v] = graph[v][u] = 1;
        }
    }
}
