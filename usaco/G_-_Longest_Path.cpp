#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=1e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],dp[N];
string s,t;
vector<vector<ll>>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
ll dfs(int i){
    if(dp[i])return dp[i];
    for(auto j:v[i]){
        dp[j]=dfs(j);
        dp[i]=max(dp[j]+1,dp[i]);
    }
    return dp[i];
}
void solve(){
    for(int i=1;i<=n;i++){
        dfs(i);
    }
    ll ans=0;
    for(int i=1;i<=n;i++)ans=max(ans,dp[i]);
    cout<<ans;
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
    v.assign(n+1,{});
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        v[x].push_back(y);
    }
    solve();
}


// #include <bits/stdc++.h>

// using namespace std;

// vector<int> dp(100001);
// vector<vector<int>> adj(100001);

// int dfs(int x) {
// 	if (dp[x]) return dp[x];
// 	for (auto e : adj[x]){
// 			dp[e] = dfs(e);
// 			dp[x] = max(dp[e] + 1, dp[x]);
// 	}
// 	return dp[x];
// }

// int main(){
// 	int n,m;
// 	cin >> n >> m;

// 	for(int i = 0; i < m; ++i) {
// 		int a, b;
// 		cin >> a >> b;
// 		a--; b--;
// 		adj[a].push_back(b);
// 	}

// 	for (int i = 0; i < n; ++i) {
// 		dfs(i);
// 	}

// 	int ans = 0;

// 	for (int i = 0;i < n; ++i) {
// 		ans = max(dp[i], ans);
// 	}

// 	cout << ans;
// }

// #include<bits/stdc++.h>
// using namespace std;
// # define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// # define ll long long
// const int N=1e5+5,mod=1e9+7;
// ll _T;
// ll n,m,x,y,k,a[N],dp[N];
// string s,t;
// vector<vector<ll>>v;
// set<ll>st;
// map<ll,ll>mp;
// pair<ll,ll>p[N];
// ll dfs(int i){
//     if(dp[i])return dp[i];
//     for(auto j:v[i]){
//         dp[j]=dfs(j);
//         dp[i]=max(dp[j]+1,dp[i]);
//     }
//     return dp[i];
// }
// void solve(){
//     for(int i=1;i<=n;i++){
//         dfs(i);
//     }
//     ll ans=0;
//     for(int i=1;i<=n;i++)ans=max(ans,dp[i]);
//     cout<<ans;
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
//     v.assign(n+1,{});
//     for(int i=1;i<=m;i++){
//         cin>>x>>y;
//         v[x].push_back(y);
//     }   
//     solve();
// }
