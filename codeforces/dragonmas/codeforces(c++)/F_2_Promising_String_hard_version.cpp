// #include<bits/stdc++.h>
// using namespace std;
// # define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// # define ll long long
// # define ld long double
// const int N=2e5+5,mod=1e9+7;
// const ll inf=1e18;
// ll _T;
// ll n,m,x,y,k,a[N],b[N];
// ll ans=0,sum=0;
// ld ansd=0,sumd=0;
// string s,t;
// vector<ll>v;
// vector<vector<ll>>vv;
// vector<pair<ll,ll>>vp;
// pair<ll,ll>p[N];
// priority_queue<ll>pq;
// queue<ll>q;
// set<ll>st;
// set<pair<ll,ll>>stp;
// set<vector<ll>>stv;
// map<ll,ll>mll;
// map<ll,vector<ll>>mlv;
// map<ll,pair<ll,ll>>mlp;
// map<pair<ll,ll>,ll>mpl;
// map<ll,map<ll,ll>>mm;
// struct node{
//     int plus,minus,ans;
// };
// node seg[N*4];
// node merge(node a,node b){
//     node c;
//     c.plus=a.plus+b.plus;
//     c.minus=a.minus+b.minus;
//     k=a.minus+b.minus-a.plus-b.plus;
//     if(k%3==0){
//         c.ans=1;
//     }
//     else c.ans=0;
//     return c;
// }
// void build(int i,int low,int high){
//     if(low==high){
//         if(s[low]=='+'){
//             seg[i].plus=1;
//             seg[i].minus=0;
//             seg[i].ans=0;
//         }
//         else{
//             seg[i].minus=1;
//             seg[i].plus=0;
//             seg[i].minus=0;
//         }
//         return;
//     }
//     int mid=(low+high)/2;
//     build(i*2,low,mid+1);
//     build(i*2+1,mid+1,high);
//     seg[i]=merge(seg[i*2],seg[i*2+1]);
// }
// void solve(){

// }
// void time_exceed(){
//     int ans=0;
//     if(s[0]=='+')a[0]=1,b[0]=0;
//     else a[0]=0,b[0]=1;
//     for(int i=1;i<n;i++){
//         if(s[i]=='+')a[i]=a[i-1]+1,b[i]=b[i-1];
//         else a[i]=a[i-1],b[i]=b[i-1]+1;
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(i>0){
//                 k=(b[j]-b[i-1])-(a[j]-a[i-1]);
//             }
//             else{
//                 k=b[j]-a[j];
//             }
//             if(k>=0&&k%3==0)ans++;
//         }
//     }
//     cout<<ans;
// }
// void read_file(){
//     freopen("traffic.in","r",stdin);
//     freopen("traffic.out","w",stdout);
// }
// int main(){
//     // read_file();
//     fast;
//     for(cin>>_T;_T--;cout<<endl){
//         cin>>n>>s;
//         s='$'+s;
//         build(1,1,n);
//         solve();
//     }
// }


#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(false);cin.tie(0);
#define ll long long
#define PII pair<int,int>
#define fi first
#define se second

const int N=2e5+5;
int tr[2*N+1];
int pre[N];
int n;
string s;

int lowbit(int x){
	return -x&x;
}

void add(int x,int c){
	for(int i=x;i<=2*n+1;i+=lowbit(i))	tr[i]+=c;
}

int sum(int x){
	int res=0;
	for(int i=x;i;i-=lowbit(i))	res+=tr[i];
	return res;
}

void solve(){
	cin>>n>>s;
	s=" "+s;
	for(int i=1;i<=n;i++)
		pre[i]=pre[i-1]+(s[i]=='-'?1:-1);
//	for(int i=1;i<=n;i++)
//		cout<<i<<"--"<<pre[i]<<"\n";
	ll res=0;
	for(int r=0;r<3;r++){
		for(int j=0;j<=2*n+1;j++){
			tr[j]=0;
		}
		for(int j=0;j<=n;j++){
			if((pre[j]-r)%3==0){
				res+=sum(pre[j]+n+1);
				add(pre[j]+n+1,1);
			}
		}
	}
	cout<<res<<"\n";
}

int main(){
	cout<<(-11)%7+7;
	IO
	int t=1;
	cin>>t;
	while(t--){
		// solve();
	}
	return 0;
}