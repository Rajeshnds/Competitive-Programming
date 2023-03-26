#include<bits/stdc++.h>
using namespace std;
string s,t;
int a[123];
void solve(){
    int z=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='?'){
            z++;
            z%=t.size();
            if(a[t[z]])a[t[z]]--,i--;
            else s[i]=t[z];
        }
    }
    cout<<s;
}
int main(){
    cin>>s>>t;
    for(int i=0;i<s.size();i++)a[s[i]]++;
    solve();
}