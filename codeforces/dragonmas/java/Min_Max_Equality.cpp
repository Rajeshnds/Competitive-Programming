#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
# define ld long double
const int N=2e5+5,mod=1e9+7;
const ll inf=1e18;
ll _T;
ll n,m,x,y,k,a[N],b[N],c[N];
ll ans=0,sum=0;
ld ansd=0,sumd=0;
string s,t;
vector<ll>v;
vector<vector<ll>>vv;
vector<pair<ll,pair<ll,ll>>>vp;
pair<ll,ll>p[N];
priority_queue<pair<ll,pair<ll,ll>>>pq;
queue<ll>q;
set<ll>st;
set<pair<ll,ll>>stp;
set<vector<ll>>stv;
map<ll,ll>mll;
map<ll,vector<ll>>mlv;
map<ll,pair<ll,ll>>mlp;
map<pair<ll,ll>,ll>mpl;
map<ll,map<ll,ll>>mm;
ll calc(ll a,ll b){
    if(b==0){
        return a*(a+1)/2;
    }
    else if(b>=a/2){
        return a;
    }
    else{
        a-=b;
        x=a/(b+1);
        y=a%(b+1);
        return b+y*((x+1)*(x+2)/2)+(b+1-y)*(x*(x+1)/2);
    }
}
void solve(){
    for(auto i:v){
        pq.push({calc(i,0)-calc(i,1),{i,0}});
    }
    while(!pq.empty()&&k>0){
        ll a=pq.top().second.first;
        ll b=pq.top().second.second;
        pq.pop();
        ll x=calc(a,b+1)-calc(a,b+2);
        pq.push({x,{a,b+1}});
        k--;
    }
    ll ans=0;
    while(!pq.empty()){
        ans+=calc(pq.top().second.first,pq.top().second.second);
        pq.pop();
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
        cin>>n>>k;
        v.clear();
        int j=0;
        for(int i=1;i<=n;i++)cin>>c[i];
        for(int i=1;i<=n;){
            j=i;
            while(j<=n&&c[i]==c[j])j++;
            v.push_back(j-i);
            i=j;
        }
        solve();
    }
}