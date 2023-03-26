#include<bits/stdc++.h>
using namespace std;
int n,m;
char c[26];
string s;
void read(){
    char a,b;
    for(int i=0;i<26;i++)c[i]=i+'a';
    cin>>n>>m>>s;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        for(int i=0;i<26;i++){
            if(c[i]==a)c[i]=b;
            else if(c[i]==b)c[i]=a;
        }
    }
}
void solve(){
    for(int i=0;i<n;i++){
        cout<<c[s[i]-'a'];
    }
}
int main(){
    read();
    solve();
}
