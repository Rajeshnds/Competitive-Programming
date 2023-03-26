#include<bits/stdc++.h>
using namespace std;
int t,n,k;
void solve(){
    for(int i=1;i<2*k-n;i++)cout<<i<<" ";
    for(int i=k;i>=2*k-n;i--)cout<<i<<" ";\
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>k;
        solve();
    }
}