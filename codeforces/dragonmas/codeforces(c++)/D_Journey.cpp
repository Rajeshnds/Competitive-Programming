#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
const int N=3e5+5;
int t,n;
string s;
int l[N],r[N];
void solve(){
	l[1]=1;
	r[n]=n;
	for(int i=2;i<=n;i++){
		if(s[i]==s[i-1])l[i]=i;
		else l[i]=l[i-1];
	}
	for(int i=n-1;i>=1;i--){
		if(s[i]==s[i+1])r[i]=i;
		else r[i]=r[i+1];
	}
	for(int i=1;i<=n+1;i++){
		int ans=1;
		if(s[i-1]=='L')ans+=i-l[i-1];
		if(s[i]=='R')ans+=r[i]-i+1;
		cout<<ans<<" ";
	}
}
void read_file(){
	freopen("traffic.in","r",stdin);
	freopen("traffic.out","w",stdout);
}
int main(){
	// read_file();
	fast;
	for(cin>>t;t--;cout<<endl){
		cin>>n>>s;
		s='.'+s;
		solve();
	}
}
