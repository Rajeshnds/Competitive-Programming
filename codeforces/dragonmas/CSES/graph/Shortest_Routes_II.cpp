#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N],q;
vector<vector<ll>>cost;
string s,t;
void solve(){
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
            }
        }
    }
    vector<ll>ans;
    for(int i=1;i<=q;i++){
        int a,b;
        cin>>a>>b;
        ans.push_back(cost[a][b]==inf?-1:cost[a][b]);
    }
    for(auto i:ans)cout<<i<<endl;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>m>>q;
    cost.assign(n+1,vector<ll>(n+1,inf));
    // roads.assign(n+1,{});
    for(int i=1;i<=n;i++){
        cost[i][i]=0;
    }
    for(int i=1;i<=m;i++){
        int a,b;ll c;
        cin>>a>>b>>c;
        cost[a][b]=min(cost[a][b],c);
        cost[b][a]=min(cost[b][a],c);
    }
    solve();
}