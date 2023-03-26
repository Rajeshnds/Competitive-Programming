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
void solve(){
    if(n==1){
        cout<<"YES";
        return;
    }
    int r=1;
    for(int i=2;i<=n;i++){
        if(a[i]-a[i-1]==1)continue;
        if(a[i]-a[i-1]==0)a[i]++;
        else if(a[i]-a[i-1]==2)a[i]--;
        else{
            r=0;
            break;
        }
    }
    if(r){
        cout<<"YES";
        return;
    }
    r=1;
    for(int i=1;i<=n;i++)a[i]=b[i];
    a[1]++;
    for(int i=2;i<=n;i++){
        if(a[i]-a[i-1]==1)continue;
        if(a[i]-a[i-1]==0)a[i]++;
        else if(a[i]-a[i-1]==2)a[i]--;
        else{
            r=0;
            break;
        }
    }
    if(r){
        cout<<"YES";
        return;
    }
    r=1;
    for(int i=1;i<=n;i++)a[i]=b[i];
    a[1]--;
    for(int i=2;i<=n;i++){
        if(a[i]-a[i-1]==1)continue;
        if(a[i]-a[i-1]==0)a[i]++;
        else if(a[i]-a[i-1]==2)a[i]--;
        else{
            r=0;
            break;
        }
    }
    if(r){
        cout<<"YES";
        return;
    }
    cout<<"NO";
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
        for(int i=1;i<=n;i++)cin>>a[i],b[i]=a[i];
        solve();
    }
}