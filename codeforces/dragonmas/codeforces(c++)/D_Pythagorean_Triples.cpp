#include<bits/stdc++.h>
using namespace std;
long long ans,t,n,i,k;
void solve(){
    k=0;
    for(i=3;(i*i+1)/2<=n;i+=2)k++;
    cout<<k;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        solve();
    }
}