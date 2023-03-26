// #include<bits/stdc++.h>
// using namespace std;
// # define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// # define ll long long
// const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
// ll n,m,x,y,k,sum,a[N],b[N];
// vector<vector<ll>>routes;
// string s,t;
// vector<int>vis;
// vector<int>path;
// vector<int>ans;
// bool dfs(int i){
//     vis[i]=1;
//     for(auto j:routes[i]){
//         path.push_back(j);
//         if(vis[j]==0){
//             if(dfs(j)){
//                 return 1;
//             }
//         }
//         else if(vis[j]==1){
//             return 1;
//         }
//         path.pop_back();
//     }
//     vis[i]=2;
//     return 0;
// }
// void solve(){
//     vis.assign(n+1,0);
//     for(int i=1;i<=n;i++){
//         path.push_back(i);
//         if(!vis[i]&&dfs(i)){
//             int k=path.back();
//             ans.push_back(k);
//             path.pop_back();
//             while(true){
//                 ans.push_back(path.back());
//                 path.pop_back();
//                 if(ans.back()==k){
//                     break;;
//                 }
//             }
//             cout<<ans.size()<<endl;
//             reverse(ans.begin(),ans.end());
//             for(auto i:ans)cout<<i<<" ";
//             return;
//         }
//         path.pop_back();
//     }
//     cout<<"IMPOSSIBLE";
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
//         routes[a].push_back(b);
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
vector<int>vis,path,ans;
bool dfs(int i){
    vis[i]=1;
    for(auto j:routes[i]){
        path.push_back(j);
        if(vis[j]==0&&dfs(j)){
            return 1;
        }
        else if(vis[j]==1){
            return 1;
        }
        path.pop_back();
    }
    vis[i]=2;
    return 0;
}
void solve(){
    vis.assign(n+1,0);
    for(int i=1;i<=n;i++){
        path.push_back(i);
        if(!vis[i]&&dfs(i)){
            ans.push_back(path.back());
            path.pop_back();
            while(true){
                ans.push_back(path.back());
                path.pop_back();
                if(ans.back()==*ans.begin()){
                    break;
                }
            }
            cout<<ans.size()<<endl;
            reverse(ans.begin(),ans.end());
            for(auto i:ans)cout<<i<<" ";
            return;
        }
        path.pop_back();
    }
    cout<<"IMPOSSIBLE";
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