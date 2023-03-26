#include<bits/stdc++.h>
using namespace std;
string s;
int n;
void solve(){
    for(int i=0;i<s.size();i++){
        if(s[i]<97)s[i]+=32;
        if(s[i]<n+97)s[i]-=32;
    }
    cout<<s;
}
int main(){
    cin>>s>>n;
    solve();
}