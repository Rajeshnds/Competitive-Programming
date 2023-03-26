#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<vector<ll>>v;
string s,t;
vector<tuple<int,int,int>>rooms;
vector<bool>vis1,vis2;
vector<vector<ll>>roads1,roads2;
vector<ll>dis;
void dfs2(int i){
    if(vis2[i])return;
    vis2[i]=true;
    for(auto j:roads2[i]){
        dfs2(j);
    }
}
void dfs1(int i){
    if(vis1[i])return;
    vis1[i]=true;
    for(auto j:roads1[i]){
        dfs1(j);
    }
}
void solve(){
    int a,b,c;
    vis1.assign(n+1,0);
    vis2.assign(n+1,0);
    dfs1(1);
    dfs2(n);
    dis.assign(n+1,-inf);
    dis[1]=0;
    for(int i=1;i<=n;i++){
        for(auto j:rooms){
            tie(a,b,c)=j;
            if(dis[b]<dis[a]+c){
                dis[b]=dis[a]+c;
                if(i==n&&vis1[b]&&vis2[b]){
                    cout<<-1;
                    return;
                }
            }
        }
    }
    cout<<dis[n];
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
    roads1.assign(n+1,{});
    roads2.assign(n+1,{});
    for(int i=1;i<=m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        rooms.push_back({a,b,c});
        roads1[a].push_back(b);
        roads2[b].push_back(a);
    }
    solve();
}