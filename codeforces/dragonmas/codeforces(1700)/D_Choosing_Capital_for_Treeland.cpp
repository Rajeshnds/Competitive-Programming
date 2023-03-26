#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],dp[N];
string s,t;
vector<vector<pair<int,int>>>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void dfs2(int i,int p){
	for(auto [j,cost]:v[i]){
		if(j==p)continue;
		dp[j]=dp[i]+(cost==0?1:-1);
		dfs2(j,i);
	}
}
void dfs1(int i,int p){
	for(auto [j,cost]:v[i]){
		if(j==p)continue;
		dfs1(j,i);
		dp[i]+=dp[j]+cost;
	}
}
void solve(){
	dfs1(1,-1);
	dfs2(1,-1);
	int k=*min_element(dp+1,dp+n+1);
	cout<<k<<endl;
	for(int i=1;i<=n;i++){
		if(dp[i]==k)cout<<i<<" ";
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
	cin>>n;
	v.assign(n+1,{});
	for(int i=1;i<n;i++){
		cin>>x>>y;
		v[x].push_back({y,0});
		v[y].push_back({x,1});
	}
	solve();
}