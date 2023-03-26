#include<bits/stdc++.h>
using namespace std;
int n,k;
string s;
void read(){
    cin>>n>>k>>s;
}
void solve(){
    string t="";
    int l=1,m=1;
    for(int i=0;i<n;i++){
        if(s[i]=='('&&l<=k/2)l++,t+='(';
        else if(s[i]==')'&&m<=k/2)m++,t+=')';
    }
    cout<<t;
}
int main(){
    read();
    solve();
}
