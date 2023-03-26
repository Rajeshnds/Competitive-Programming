#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
# define ld long double
const int N=3e5+5,mod=1e9+7;
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
void solve(){
    ans=LLONG_MAX;
    for(int j=k;j<=k+1;j++){
        ll one=0,two=0,r=0;
        for(int i=1;i<=n;i++){
            two+=(j-a[i])/2;
            one+=(j-a[i])%2;
        }
        if(one>two)r=one*2-1;
        else if(one==two)r=one*2;
        else{
            two-=one;
            r=one*2;
            r+=4*(two/3);
            if(two%3==1)r+=2;
            else if(two%3==2)r+=3;
        }
        ans=min(ans,r);
    }
    cout<<ans;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>n;
        k=0;
        for(int i=1;i<=n;i++)cin>>a[i],k=max(k,a[i]);
        solve();
    }
}