// codeforces: https://codeforces.com/problemset/problem/1567/E

#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
# define ld long double
const int N=2e5+5,mod=1e9+7;
const ll inf=1e18;
ll _T;
ll n,m,x,y,k,q,a[N],b[N],l,r,t;
ll ans=0,sum=0;
ld ansd=0,sumd=0;
// string s,t;
vector<ll>v;
vector<vector<ll>>vv;
vector<pair<ll,ll>>vp;
pair<ll,ll>p[N];
priority_queue<ll>pq;
// queue<ll>q;
set<ll>st;
set<pair<ll,ll>>stp;
set<vector<ll>>stv;
map<ll,ll>mll;
map<ll,vector<ll>>mlv;
map<ll,pair<ll,ll>>mlp;
map<pair<ll,ll>,ll>mpl;
map<ll,map<ll,ll>>mm;
struct node{
    int prfx,sufx,count,first,last;
    ll ans;
};
node seg[N*4],neutral;
node merge(node a,node b){
    node c;
    c.ans=a.ans+b.ans;
    if(a.last<=b.first){
        c.ans+=(1ll*a.sufx*b.prfx);
        if(a.prfx==a.count){
            c.prfx=a.count+b.prfx;
        }
        else c.prfx=a.prfx;
        if(b.sufx==b.count){
            c.sufx=a.sufx+b.count;
        }
        else c.sufx=b.sufx;
    }
    else{
        c.prfx=a.prfx;
        c.sufx=b.sufx;
    }
    c.count=a.count+b.count;
    c.first=a.first;
    c.last=b.last;
    return c;
}
void build(int i,int low,int high){
    if(low==high){
        seg[i].ans=seg[i].prfx=seg[i].sufx=seg[i].count=1;
        seg[i].first=seg[i].last=a[low];
        return;
    }
    int mid=(low+high)/2;
    build(i*2,low,mid);
    build(i*2+1,mid+1,high);
    seg[i]=merge(seg[i*2],seg[i*2+1]);
}
void update(int i,int low,int high,int pos,int value){
    if(pos>high||pos<low){
        return;
    }
    if(low==high&&pos==low){
        seg[i].ans=seg[i].prfx=seg[i].sufx=seg[i].count=1;
        seg[i].first=seg[i].last=value;
        return;
    }
    int mid=(low+high)/2;
    update(i*2,low,mid,pos,value);
    update(i*2+1,mid+1,high,pos,value);
    seg[i]=merge(seg[i*2],seg[i*2+1]);
}
node query(int i,int low,int high,int l,int r){
    if(l>high||r<low){
        return neutral;
    }
    if(low>=l&&high<=r){
        return seg[i];
    }
    int mid=(low+high)/2;
    node left=query(i*2,low,mid,l,r);
    node right=query(i*2+1,mid+1,high,l,r);
    return merge(left,right);
}
void solve(){
    neutral.ans=neutral.prfx=neutral.sufx=neutral.count=0;
    neutral.first=INT_MAX;
    neutral.last=-1;
    for(int i=1;i<=q;i++){
        cin>>t>>l>>r;
        if(t==1){
            update(1,1,n,l,r);
        }
        else{
            cout<<query(1,1,n,l,r).ans<<endl;
        }
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
    cin>>n>>q;
    for(int i=1;i<=n;i++)cin>>a[i];
    build(1,1,n);
    solve();
}