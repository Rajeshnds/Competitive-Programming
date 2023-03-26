#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
const int N=2e5+5;
int t,n,m,mod=998244353;
ll inv[N];
void solve(){
	ll ans=n-2;
	for(int i=1;i<=n-3;i++)ans=ans*2%mod;
	for(int i=1;i<=m;i++)ans=ans*i%mod;
	for(int i=1;i<=n-1;i++)ans=ans*inv[i]%mod;
	for(int i=1;i<=m-(n-1);i++)ans=ans*inv[i]%mod;
	cout<<ans;
}
void read_file(){
	freopen("traffic.in","r",stdin);
	freopen("traffic.out","w",stdout);
}
int main(){
	// read_file();
	fast;
	cin>>n>>m;
	inv[1]=1;
	// finding modulo inverse
	for(int i=2;i<=m;i++)inv[i]=mod-mod/i*inv[mod%i]%mod;
	solve();
}
