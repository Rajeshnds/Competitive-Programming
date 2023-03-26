#include<bits/stdc++.h>
using namespace std;
int t,l,r;
void solve(){
    int k=(r/2)+1;
    k=max(k,l);
    cout<<r%k;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>l>>r;
        solve();
    }
}