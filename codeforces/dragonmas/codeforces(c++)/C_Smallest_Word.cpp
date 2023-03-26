#include<bits/stdc++.h>
using namespace std;
string s;
void solve(){
    s+='b';
    for(int i=0;i<s.size()-1;i++){
        cout<<(s[i]!=s[i+1])<<" ";
    }
}
int main(){
    cin>>s;
    solve();
}