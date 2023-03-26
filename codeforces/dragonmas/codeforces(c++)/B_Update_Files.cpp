#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int t,n,k;
void solve(){
    int i=1,ans=0;
    while(i<k)i+=i,ans++;
    if(i<n){
        int d=n-i;
        ans+=(d+k-1)/k;
    }
    cout<<ans;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>t;t--;cout<<endl){
        cin>>n>>k;
        solve();
    }
}
