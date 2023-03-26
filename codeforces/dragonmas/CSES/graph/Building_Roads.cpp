#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<vector<ll>>roads;
string s,t;
void dfs(int i){
    if(b[i])return;
    b[i]=1;
    for(auto j:roads[i]){
        dfs(j);
    }
}
void solve(){
    vector<int>new_roads;
    for(int i=1;i<=n;i++){
        if(b[i]==0){
            new_roads.push_back(i);
            dfs(i);
        }
    }
    cout<<new_roads.size()-1<<endl;
    for(int i=1;i<new_roads.size();i++){
        cout<<new_roads[i-1]<<" "<<new_roads[i]<<endl;
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
    roads.assign(n+1,{});
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        roads[x].push_back(y);
        roads[y].push_back(x);
    }
    solve();
}