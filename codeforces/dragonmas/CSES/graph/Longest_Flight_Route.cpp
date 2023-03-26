// #include<bits/stdc++.h>
// using namespace std;
// # define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// # define ll long long
// const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
// ll n,m,x,y,k,sum,a[N],b[N];
// vector<vector<pair<ll,ll>>>routes;
// vector<int>ans;
// string s,t;
// vector<int>vis;
// void solve(){
//     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
//     vector<ll>dis(n+1,0);
//     vector<int>path(n+1,0);
//     path[1]=-1;
//     pq.push({0,1});
//     dis[1]=0;
//     while(!pq.empty()){
//         ll d=pq.top().first;
//         int x=pq.top().second;
//         pq.pop();
//         // if(vis[x])continue;
//         if(dis[x]<d)continue;
//         for(auto j:routes[x]){
//             int y=j.first;
//             int c=j.second;
//             if(dis[y]>c+d){
//                 dis[y]=c+d;
//                 pq.push({dis[y],y});
//                 path[y]=x;
//             }
//         }
//     }
//     if(dis[n]==0){
//         cout<<"IMPOSSIBLE";
//     }
//     else{
//         int temp=n;
//         while(temp!=-1){
//             ans.push_back(temp);
//             temp=path[temp];
//         }
//         reverse(ans.begin(),ans.end());
//         cout<<-dis[n]+1<<endl;
//         for(auto i:ans)cout<<i<<" ";
//     }
// }
// void read_file(){
//     freopen("traffic.in","r",stdin);
//     freopen("traffic.out","w",stdout);
// }
// int main(){
//     // read_file();
//     fast;
//     // for(cin>>_T;_T--;cout<<endl)
//     cin>>n>>m;
//     routes.assign(n+1,{});
//     for(int i=1;i<=m;i++){
//         int a,b;
//         cin>>a>>b;
//         routes[a].push_back({b,-1});
//     }
//     solve();
// }

#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,sum,a[N],b[N];
vector<vector<ll>>routes;
string s,t;
vector<int>vis,par,ans,dis;
void dfs(int i){
    vis[i]=1;
    if(i==n)return;
    for(auto j:routes[i]){
        if(!vis[j]){
            dfs(j);
        }
        if(dis[j]>dis[i]){
            dis[i]=dis[j];
            par[i]=j;
        }
    }
    if(dis[i]>0)dis[i]++;
}
void solve(){
    vis.assign(n+1,0);
    par.assign(n+1,0);
    dis.assign(n+1,0);
    par[n]=-1;
    dis[n]=1; 
    dfs(1);
    if(dis[1]==0){
        cout<<"IMPOSSIBLE";
        return;
    }
    int i=1;
    while(i!=-1){
        ans.push_back(i);
        i=par[i];
    }
    cout<<ans.size()<<endl;
    for(auto i:ans)cout<<i<<" ";
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
        int a,b;
        cin>>a>>b;
        routes[a].push_back(b);
    }
    solve();
}