#include<bits/stdc++.h>
using namespace std;
int n,ans=1;
string s;
set<char>st;
map<char,char>m{{'R','L'},{'L','R'},{'D','U'},{'U','D'}};
void solve(){
    for(int i=0;i<n;i++){
        if(st.count(m[s[i]]))ans++,st.clear();
        st.insert(s[i]);
    }
    cout<<ans;
}
int main(){
    cin>>n>>s;
    solve();
}