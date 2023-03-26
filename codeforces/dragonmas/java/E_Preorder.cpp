#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
# define ld long double
const int N=2e5+5,mod=1e9+7;
const ll inf=1e18;
ll _T;
ll n,m,x,y,k,a[N],b[N];
ll ans=0,sum=0;
ld ansd=0,sumd=0;
string s,t;
vector<ll>v;
vector<vector<ll>>vv;
vector<pair<ll,ll>>vp;
pair<ll,ll>p[N];
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
    string s;
};
node seg[N*4];
node merge(node a,node b){
    node c; 
    c.s=c.s+a.s+b.s;
    return c;
}
void build(int i,int low,int high){
    if(low==high){
        return;
    }
    int mid=(low+high)/2;
    build(i*2,low,mid);
    build(i*2+1,mid+1,high);
    seg[i]=merge(seg[i*2],seg[i*2+1]);
}
void solve(){
    while(true){
        q.push(1);
        while(!q.empty()){
            k=q.front();
            q.pop();
        }
        k=q.front();
        q.pop();
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
    cin>>n>>s;
    n=(1<<n);
    s='#'+s;
    for(int i=1;i<=n;i++){
        seg[i].s=s[i];
    }
    build(1,1,n);
    solve();
}