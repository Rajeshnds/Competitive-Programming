#include<bits/stdc++.h>
using namespace std;
int t,n;
void solve(){
    set<int>s;
    s.insert(0);
    for(int i=1;i*i<=n;i++){
        s.insert(i);
        s.insert(n/i);
    }
    cout<<s.size()<<endl;
    for(auto i:s)cout<<i<<" ";
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        solve();
    }
}