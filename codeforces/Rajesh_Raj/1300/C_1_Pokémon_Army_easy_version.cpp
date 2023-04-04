#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
int n,q;
vector<int>v;
vector<vector<int>>adj;
string s;
void solve(){
    int i=0;
    ll ans=0;
    while(true){
        while(i+1<n&&v[i+1]>=v[i])i++;
        ans+=v[i];
        while(i+1<n&&v[i+1]<=v[i])i++;
        if(i==n-1)break;
        ans-=v[i];
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
    for(cin>>_T;_T--;cout<<endl){
        cin>>n>>q;
        v.assign(n,0);
        for(int i=0;i<n;i++)cin>>v[i];
        solve();
    }
}