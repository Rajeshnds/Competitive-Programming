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
    if(k>=4&&n%4==0)v.push_back(4);
    for(int i=3;i<=k;i++){
        int r=1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0)r=0;
        }
        if(r&&n%i==0)v.push_back(i);
    }
    for(auto i:v){
        for(int j=1;j<=n/i;j++){
            if(a[j]==1){
                int r=1;
                for(int k=j;k<=n;k+=n/i){
                    if(a[k]!=1)r=0;
                }
                if(r){
                    cout<<"YES";
                    return;
                }
            }
        }
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
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        k+=a[i];
    }
    solve();
}