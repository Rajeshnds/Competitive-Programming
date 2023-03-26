#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<vector<ll>>v;
vector<vector<pair<ll,ll>>>routes;
string s,t;
void solve(){
    priority_queue<pair<ll,ll>>pq;
    vector<ll>mi_cost(n+1,inf);
    vector<ll>total_mi_cost(n+1,0);
    vector<ll>mi_flight(n+1,0);
    vector<ll>ma_flight(n+1,0);
    mi_cost[1]=0;
    total_mi_cost[1]=1;
    mi_flight[1]=0;
    ma_flight[1]=0;
    pq.push({0,1});
    while(!pq.empty()){
        ll d=-pq.top().first;
        ll x=pq.top().second;
        pq.pop();
        if(mi_cost[x]<d)continue;
        for(auto j:routes[x]){
            int y=j.first;
            int c=j.second;
            if(mi_cost[y]>c+d){
                mi_cost[y]=c+d;
                total_mi_cost[y]=total_mi_cost[x];
                mi_flight[y]=mi_flight[x]+1;
                ma_flight[y]=ma_flight[x]+1;
                pq.push({-mi_cost[y],y});
            }
            else if(mi_cost[y]==c+d){
                (total_mi_cost[y]+=total_mi_cost[x])%=mod;
                mi_flight[y]=min(mi_flight[y],mi_flight[x]+1);
                ma_flight[y]=max(ma_flight[y],ma_flight[x]+1);
            }
        }
    }
    cout<<mi_cost[n]<<" "<<total_mi_cost[n]<<" "<<mi_flight[n]<<" "<<ma_flight[n];
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
    routes.assign(n+1,{});
    for(int i=1;i<=m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        routes[a].push_back({b,c});
    }
    solve();
}