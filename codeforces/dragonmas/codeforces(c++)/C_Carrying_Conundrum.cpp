#include<bits/stdc++.h>
using namespace std;
int t,n;
string s;
void solve(){
    string k="",l="";
    int d=0,e=0;
    for(int i=0;i<s.size();i++){
        if(i&1)k+=s[i];
        else l+=s[i];
    }
    if(k.size()>0)d=stoi(k);
    if(l.size()>0)e=stoi(l);
    cout<<1LL*(d+1)*(e+1)-2;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        s=to_string(n);
        solve();
    }
}