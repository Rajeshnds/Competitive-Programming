#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
# define ld long double
const int N=2e5+5,mod=1e9+7;
const ll inf=1e18;
ll _T;
ll n,m,x,y,k,a[N],b[N];
ll ans=0,sum=0;
ld ansd=0,sumd=0;
string s,t;
vector<ll>v,v1;
vector<vector<ll>>vv,vv2;
vector<pair<ll,ll>>vp;
pair<ll,ll>p[N];
priority_queue<ll>pq;
queue<ll>q;
set<ll>st1,st2,st;
set<pair<ll,ll>>stp;
set<vector<ll>>stv;
map<ll,ll>mll;
map<ll,vector<ll>>mlv;
map<ll,pair<ll,ll>>mlp;
map<pair<ll,ll>,ll>mpl;
map<ll,map<ll,ll>>mm;
void dfs(int i,int p){
    v.push_back(vv[i].size());
    for(auto j:vv[i]){
        if(j!=p&&vv[j].size()!=1){
            dfs(j,i);
        }
    }
}
void solve(){
    v.clear();
    v.push_back(1);
    dfs(1,0);
    k=v.size();
    ans=k;
    sort(v.begin(),v.end());
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]>k){
            ll d=(v[i]-k+1)/2;
            ans+=d;
            // k+=d;
        }
        k--;
    }
    // if(v[k-1]>k)ans+=(v[k-1]-k+1)/2; 
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
        cin>>n;
        vv.assign(n+1,{});
        for(int i=2;i<=n;i++){
            cin>>x;
            vv[i].push_back(x);
            vv[x].push_back(i);
        }
        solve();
    }
}