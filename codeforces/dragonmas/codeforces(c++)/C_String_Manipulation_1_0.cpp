#include<bits/stdc++.h>
using namespace std;
int k,n,p;
char c;
vector<int>v[27];
string s,t;
void solve(){
    for(int i=0;i<t.size();i++){
        v[t[i]-'a'].push_back(i);
    }
    for(int i=1;i<=n;i++){
        cin>>p>>c;
        t[v[c-'a'][p-1]]='.';
        v[c-'a'].erase(v[c-'a'].begin()+p-1);
    }
    for(int i=0;i<t.size();i++){
        if(t[i]!='.')cout<<t[i];\
    }
}
int main(){
    cin>>k>>s>>n;
    for(int i=1;i<=k;i++)t+=s;
    solve();
}