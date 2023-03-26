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
void proc(int j){
    x=(k+a[j]-1)/a[j];
    if(x*a[j]==k)x++;
    k=a[j]*x;
    y+=x;
}
void solve(){
    ans=LLONG_MAX;
    for(int i=1;i<=n;i++){
        k=0;y=0;
        for(int j=i-1;j>=1;j--){
            if(a[j]<=k){
                proc(j);
            }
            else k=a[j],y++;
        }
        k=0;
        for(int j=i+1;j<=n;j++){
            if(a[j]<=k){
                proc(j);
            }
            else k=a[j],y++;
        }
        ans=min(ans,y);
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
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    solve();
}