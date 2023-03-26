// question link
// https://www.codechef.com/problems/BULENE

#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
# define ld long double
const int N=3e5+5,mod=1e9+7;
const ll inf=1e18;
ll _T;
ll n,m,x,y,k,s[N],p[N],c[N],a[N],b[N],ans[N];
// ll ans=0,sum=0;
ld ansd=0,sumd=0;
// string s,t;
vector<ll>v;
vector<vector<ll>>vv;
vector<pair<ll,ll>>vp;
// pair<ll,ll>p[N];
priority_queue<ll>pq;
queue<ll>q;
set<ll>st;
set<pair<ll,ll>>stp;
set<vector<ll>>stv;
map<ll,ll>mll;
map<ll,vector<ll>>mlv;
map<ll,pair<ll,ll>>mlp;
map<pair<ll,ll>,ll>mpl;
map<ll,map<ll,ll>>mm;
struct node{
	ll _min,_max,cnt,flag=0;
};
node seg[N*4];
node push_up(node a,node b){
	node c;
	c.cnt=a.cnt+b.cnt;
	c._min=min(a._min,b._min);
	c._max=max(a._max,b._max);
	return c;
}
void build(int i,int low,int high){
	if(low==high){
		seg[i]._min=s[low];
		seg[i]._max=s[low];
		seg[i].cnt=1;
		seg[i].flag=0;
		return;
	}
	int mid=(low+high)/2;
	build(i*2,low,mid);
	build(i*2+1,mid+1,high);
	seg[i]=push_up(seg[i*2],seg[i*2+1]);
}
int calc(int i,int low,int high,int c){
	if(seg[i].cnt<=c)return high;
	int mid=(low+high)/2;
	if(seg[i*2].cnt>=c){
		return calc(i*2,low,mid,c);
	}
	else return calc(i*2+1,mid+1,high,c-seg[i*2].cnt);
}
void push_down(int i){
	if(seg[i].flag==0)return;
	seg[i*2].flag+=seg[i].flag;
	seg[i*2]._max+=seg[i].flag;
	seg[i*2]._min+=seg[i].flag;
	seg[i*2+1].flag+=seg[i].flag;
	seg[i*2+1]._max+=seg[i].flag;
	seg[i*2+1]._min+=seg[i].flag;
	seg[i].flag=0;
}
void update(int i,int low,int high,int l,int r,int p){
	if(r<low||l>high)return;
	if(low>=l&&high<=r){
		if(seg[i]._max+p<=0){
			seg[i].flag+=p;
			seg[i]._max=1e18;
			seg[i]._min=1e18;
			seg[i].cnt=0;
			return;
		}
		if(seg[i]._min+p>0){
			seg[i].flag+=p;
			seg[i]._max+=p;
			seg[i]._min+=p;
			return;
		}
	}
	int mid=(low+high)/2;
	push_down(i);
	update(i*2,low,mid,l,r,p);
	update(i*2+1,mid+1,high,l,r,p);
	seg[i]=push_up(seg[i*2],seg[i*2+1]);
}
void calc(int i,int low,int high){
	if(low==high){
		if(seg[i]._min<=0||seg[i]._min>s[low])ans[low]=0;
		else ans[low]=seg[i]._min;
		return;
	}
	int mid=(low+high)/2;
	push_down(i);
	calc(i*2,low,mid);
	calc(i*2+1,mid+1,high);
}
void solve(){
	for(int i=1;i<=m;i++){
		int id=calc(1,1,n,c[i]);
		update(1,1,n,1,id,-p[i]);
	}
	calc(1,1,n);
	for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
}
void read_file(){
	freopen("traffic.in","r",stdin);
	freopen("traffic.out","w",stdout);
}
int main(){
	// read_file();
	fast;
	for(cin>>_T;_T--;cout<<endl){
		cin>>n>>m;
		for(int i=1;i<=n;i++)cin>>s[i];
		for(int i=1;i<=m;i++)cin>>p[i];
		for(int i=1;i<=m;i++)cin>>c[i];
		build(1,1,n);
		solve();
	}
}



