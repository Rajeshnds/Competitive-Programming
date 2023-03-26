#include<bits/stdc++.h>
using namespace std;
int t,l,r,d=1,s;
void solve(){
    s=0;d=1;
    while(d<=r){
        s+=(r/d-l/d);
        d*=10;
    }
    cout<<s<<endl;
}
int main(){
    for(cin>>t;t--;){
        cin>>l>>r;
        solve();
    }
}