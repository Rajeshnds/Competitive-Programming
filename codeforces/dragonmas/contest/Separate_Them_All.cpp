#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a,b,c,d,q;
string s,t;
vector<vector<int>>v;
vector<int>v1;
set<ll>st;
map<ll,ll>mp;
pair<int,int>p[N];
void solve(){
    int ans=0;
    for(int i=1;i<=n;i++){
        p[i]={v[i].size(),i};
    }
    sort(p+1,p+n+1);
    for(int i=1;i<=n;i++){
        pair<int,int>x;
        x=p[i];
        k=v[x.second][0];
        ans+=v1[k];
        v1[k]--;
        v1[x.second]--;
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
        v.assign(n+1,{});
        v1.resize(n+1,0);
        for(int i=1;i<n;i++){
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
            v1[x]++;
            v1[y]++;
        }
        solve();
        for(int i=1;i<=q;i++){
            cin>>a>>b>>c>>d;
            // solve();
        }
    }
}