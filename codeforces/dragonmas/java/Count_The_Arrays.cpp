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
vector<ll>v,e,o;
vector<vector<ll>>vv;
vector<pair<ll,ll>>vp;
pair<ll,ll>p[N];
priority_queue<ll>pq;
queue<ll>q;
set<ll>st;
set<pair<ll,ll>>stp;
set<vector<ll>>stv;
map<ll,ll>mll;
map<ll,vector<ll>>mlv;
map<ll,pair<ll,ll>>mlp;
map<pair<ll,ll>,ll>mpl;
map<ll,map<ll,ll>>mm;
ll proc(vector<ll> &v,vector<vector<ll>>&dp,ll s,ll ex,ll n){
    if(s==n){
        return ex<=0;
    }
    if(dp[s][ex]!=-1)return dp[s][ex];
    ll ans=0;
    for(int i=0;i<v[s]+1;i++){
        if(ex<i){
            break; 
        }
        ans=(ans+proc(v,dp,s+1,ex-i,n))%mod;
    }
    return dp[s][ex]=ans%mod;
}
void solve(){
    if(o.size()!=e.size()){
        cout<<0;
        return;
    }
    ll s=0;
    for(int i=0;i<n;i++){
        if(o[i]+1!=e[i]){
            cout<<0;
            return;
        }
        s+=e[i];
    }
    ll ex=s-k;
    if(ex<0||ex>n){
        cout<<0;
    }
    else if(ex==0||ex==n){
        cout<<1;
    }
    else{
        vector<ll>tmp;
        ll p=0;
        for(int i=0;i<n;i++){
            if(o[i]!=p){
                tmp.push_back(0);
                p=o[i];
            }
            int l=tmp.size();
            tmp[l-1]++;
        }
        vector<vector<ll>>dp(tmp.size(),vector<ll>(n+1,-1));
        cout<<proc(tmp,dp,0,ex,tmp.size());
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>n>>k;
        // vector<int>e,o;
        o.clear();
        e.clear();
        for(int i=0;i<2*n;i++){
            cin>>x;
            if(x&1)o.push_back(x);
            else e.push_back(x);
        }
        sort(o.begin(),o.end());
        sort(e.begin(),e.end());
        solve();
    }
}