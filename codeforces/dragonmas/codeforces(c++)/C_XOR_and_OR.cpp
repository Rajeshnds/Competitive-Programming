#include<bits/stdc++.h>
using namespace std;
string s,t;
void solve(){
    if(t.size()!=s.size())cout<<"NO";
    else if((s.find('1')==-1&&t.find('1')!=-1))cout<<"NO";
    else if(s.find('1')!=-1&&t.find('1')==-1)cout<<"NO";
    else cout<<"YES";
}
int main(){
    cin>>s>>t;
    solve();
}