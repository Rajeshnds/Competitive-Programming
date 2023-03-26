#include<bits/stdc++.h>
using namespace std;
int t,n,m,k;
void solve(){
    long long d=1ll*n*(n-1)/2;
    if(n==1&&k>=2&&m==0)cout<<"YES";
    else if(m==d&&k>=3)cout<<"YES";
    else if(m>=n-1&&m<d&&k>=4)cout<<"YES";
    else cout<<"NO";
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>m>>k;
        solve();
    }
}