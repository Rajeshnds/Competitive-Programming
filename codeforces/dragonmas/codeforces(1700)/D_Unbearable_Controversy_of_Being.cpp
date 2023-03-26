#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=3e3+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N][N];
string s,t;
vector<vector<ll>>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    ll ans=0;
    for(int i=1;i<=n;i++){
        for(auto j:v[i]){
            for(auto k:v[j]){
                if(k!=i){
                    ans+=a[i][k];
                    a[i][k]++;
                }
            }
        }
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
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>m;
    v.assign(n+1,{});
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        v[x].push_back(y);
    }
    solve();
}