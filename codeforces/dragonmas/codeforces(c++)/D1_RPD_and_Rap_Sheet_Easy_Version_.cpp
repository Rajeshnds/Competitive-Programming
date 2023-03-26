#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,k;
void solve(){
    int f;
    for(int i=0;i<n;i++){
        if(i==0)cout<<0<<endl;
        else cout<<(i^(i-1))<<endl;
        cin>>f;
        if(f==1)break;
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>t;t--;){
        cin>>n>>k;
        solve();
    }
}