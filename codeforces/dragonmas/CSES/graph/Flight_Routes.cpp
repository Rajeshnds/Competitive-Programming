// #include<bits/stdc++.h>
// using namespace std;
// # define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// # define ll long long
// const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
// ll n,m,x,y,k,ans,sum,a[N],b[N];
// vector<vector<ll>>v;
// vector<vector<pair<ll,ll>>>routes;
// string s,t;
// void solve(){
//     // priority_queue<pair<ll,pair<ll,ll>>>pq;
//     priority_queue<pair<ll,ll>>pq;
//     // vector<ll>dis(n+1,inf);
//     vector<vector<ll>>dis(n+1,vector<ll>(k,inf));
//     // for(int i=0;i<k;i++){
//     //     dis[1][i]=0;
//     //     // pq.push({-dis[1][i],1});
//     // }
//     // dis[1][0]=0;
//     pq.push({0,1});
//     // vector<bool>vis(n+1,0);
//     // vector<vector<bool>>vis(n+1,vector<bool>(k,0));
//     while(!pq.empty()){
//         ll d=-pq.top().first;
//         int x=pq.top().second;
//         pq.pop();
//         // if(vis[x][ind])continue;
//         // if(vis[x])continue;
//         if(dis[x][k-1]<d)continue;
//         // vis[x][ind]=true;
//         // vis[x]=true;
//         for(auto j:routes[x]){
//             int y=j.first;ll c=j.second;
//             // for(int i=k-1;i>=0;i--){
//                 if(dis[y][k-1]>d+c){
//                     // dis[y][i+1]=dis[y][i];
//                     dis[y][k-1]=d+c;
//                     pq.push({-dis[y][k-1],y});
//                     sort(dis[y].begin(),dis[y].end());
//                     // pq.push({-dis[y][i+1],{y,i+1}});
//                     // break;
//                 }
//             // }
//             // if(dis[y]>dis[x]+c){
//             //     dis[y]=dis[x]+c;
//             //     pq.push({-dis[y],y});
//             // }
//         }
//     }
//     for(int i=0;i<k;i++){
//         cout<<dis[n][i]<<" ";
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
//     cin>>n>>m>>k;
//     routes.assign(n+1,{});
//     for(int i=1;i<=m;i++){
//         ll a,b,c;
//         cin>>a>>b>>c;
//         routes[a].push_back({b,c});
//     }
//     solve();
// }

#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<vector<ll>>v;
string s,t;
vector<vector<pair<ll,ll>>>routes;
void solve(){
    priority_queue<pair<ll,ll>>pq;
    vector<vector<ll>>dis(n+1,vector<ll>(k,inf));
    pq.push({0,1});
    while(!pq.empty()){
        ll d=-pq.top().first;
        int x=pq.top().second;
        pq.pop();
        if(dis[x][k-1]<d)continue;
        for(auto j:routes[x]){
            int y=j.first;
            ll c=j.second;
            if(dis[y][k-1]>d+c){
                dis[y][k-1]=d+c;
                pq.push({-dis[y][k-1],y});
                sort(dis[y].begin(),dis[y].end());
            }
        }
    }
    for(int i=0;i<k;i++)cout<<dis[n][i]<<" ";
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>m>>k;
    routes.assign(n+1,{});
    for(int i=1;i<=m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        routes[a].push_back({b,c});
    }
    solve();
}

