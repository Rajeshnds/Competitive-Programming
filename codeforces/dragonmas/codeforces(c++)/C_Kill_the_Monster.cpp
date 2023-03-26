#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t;
ll hc,dc,hm,dm,k,w,a;
void solve(){
    int ans=0;
    for(int i=0;i<=k;i++){
        ll d=dc+(i*w);
        ll e=hc+((k-i)*a);
        if((hm+d-1)/d<=(e+dm-1)/dm){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>t;t--;cout<<endl){
        cin>>hc>>dc>>hm>>dm>>k>>w>>a;
        solve();
    }
}