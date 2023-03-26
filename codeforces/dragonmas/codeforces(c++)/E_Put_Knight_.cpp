#include<bits/stdc++.h>
using namespace std;
int t,n;
void solve(){
    cout<<(n&1?0:1)<<endl;
}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    for(cin>>t;t--;){
        cin>>n;
        solve();
    }
}