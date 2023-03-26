#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<vector<ll>>employee;
string s,t;
vector<int>vis,cnt;
void dfs(int i,int p){
    if(vis[i])return;
    vis[i]=1;
    for(auto j:employee[i]){
        if(j!=p){
            dfs (j,i);
            cnt[i]+=cnt[j]+1;
        }
    }
}
void solve(){
    vis.assign(n+1,0);
    cnt.assign(n+1,0);
    dfs(1,-1);
    for(int i=1;i<=n;i++)cout<<cnt[i]<<" ";
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n;
    employee.assign(n+1,{});
    for(int i=2;i<=n;i++){
        int a;
        cin>>a;
        employee[a].push_back(i);
        employee[i].push_back(a);
    }
    solve();
}