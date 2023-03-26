#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=1e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<vector<pair<int,int>>>connection;
vector<ll>dis;
string s,t;
void solve(){
    vector<bool>vis(n+1,0);
    priority_queue<pair<ll,ll>>q;
    dis.assign(n+1,inf);
    dis[1]=0;
    q.push({-dis[1],1});
    while(!q.empty()){
        int k=q.top().second;
        int d=-q.top().first;
        q.pop();
        // if(vis[k])continue;
        // vis[k]=true;
        if(dis[k]<d)continue;
        for(auto j : connection[k]){
            if(dis[j.first]>dis[k]+j.second){
                dis[j.first]=dis[k]+j.second;
                q.push({-dis[j.first],j.first});
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<dis[i]<<" ";
    }
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
    connection.assign(n+1,{});
    for(int i=1;i<=m;i++){
        ll a,b,c;
        cin>>a>>b>>c;
        connection[a].push_back({b,c});
    }
    solve();
}


