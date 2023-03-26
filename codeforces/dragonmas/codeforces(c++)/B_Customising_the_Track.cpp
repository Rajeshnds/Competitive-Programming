#include<bits/stdc++.h>
using namespace std;
long long t,n,a,s,k;
void solve(){
    s=0;
    for(int i=0;i<n;i++){
        cin>>a;
        s+=a;
    }
    k=s%n;
    cout<<k*(n-k);
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        solve();
    }
}