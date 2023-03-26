#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<vector<ll>>v;
string s,t;
vector<vector<pair<ll,ll>>>route;
void solve(){
    priority_queue<pair<ll,pair<ll,ll>>>pq;
    vector<vector<ll>>dis(n+1,vector<ll>(2,inf));
    int is_used;
    int used=1;
    dis[1][0]=0;
    pq.push({-dis[1][!used],{1,!used}});
    while(!pq.empty()){
        ll d=-pq.top().first;
        int x=pq.top().second.first;
        is_used=pq.top().second.second;
        pq.pop();
        if(is_used){
            if(dis[x][used]<d)continue;
        }
        if(!is_used){
            if(dis[x][!used]<d)continue;
        }
        // if(dis[x][is_used]!=d){
        //     continue;
        // }
        for(auto j:route[x]){
            int y=j.first;
            int c=j.second;
            if(!is_used){
                if(dis[y][!used]>c+d){
                    dis[y][!used]=c+d;
                    pq.push({-dis[y][!used],{y,!used}});
                }
                if(dis[y][used]>d+c/2){
                    dis[y][used]=d+c/2;
                    pq.push({-dis[y][used],{y,used}});
                }
            }
            if(is_used){
                if(dis[y][used]>c+d){
                    dis[y][used]=c+d;
                    pq.push({-dis[y][used],{y,used}});
                }
            }
        }
    }
    cout<<dis[n][used];
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
    route.assign(n+1,{});
    for(int i=1;i<=m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        route[a].push_back({b,c});
    }
    solve();
}