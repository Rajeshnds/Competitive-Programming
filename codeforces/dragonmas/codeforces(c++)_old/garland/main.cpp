#include<bits/stdc++.h>
using namespace std;
string s,t;
void read(){
    cin>>s>>t;
}
void solve(){
    int k=0,f=1;
    int a[26]={0},b[26]={0};
    for(int i=0;i<s.size();i++){
        a[s[i]-'a']++;
    }
    for(int i=0;i<t.size();i++){
        b[t[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(b[i]&&!a[i])f=0;
        k+=min(a[i],b[i]);
    }
    cout<<(f?k:-1);
}
int main(){
    read();
    solve();
}
