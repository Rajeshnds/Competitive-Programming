#include<bits/stdc++.h>
using namespace std;
int n,b[200001],osuf,esuf;
void read(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>b[i];
        i&1?esuf+=b[i]:osuf+=b[i];
    }
}
void solve(){
    int epref=0,opref=0,ans=0;
    for(int i=0;i<n;i++){
        i&1?esuf-=b[i]:osuf-=b[i];
        if(epref+osuf == opref+esuf)ans++;
        i&1?epref+=b[i]:opref+=b[i];
    }
    cout<<ans;
}
int main(){
    read();
    solve();
}
