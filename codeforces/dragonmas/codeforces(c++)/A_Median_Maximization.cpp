#include<bits/stdc++.h>
using namespace std;
int t,n,s;
void solve(){
    int k=(n+1)/2;
    int l=n-k+1;
    cout<<s/l;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>s;
        solve();
    }
}