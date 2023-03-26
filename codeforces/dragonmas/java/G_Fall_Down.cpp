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
string s[101],t[101];
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
    for(int i=0;i<=50;i++){
        t[i]="";
        for(int j=0;j<=50;j++){
            t[i]+='.';
        }
    }
    for(int i=0;i<m;i++){
        k=n;
        for(int j=n;j>=1;j--){
            if(s[j][i]=='o')t[j][i]='o',k=j-1;
            if(s[j][i]=='*')t[k][i]='*',k--;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<m;j++){
            cout<<t[i][j];
        }
        cout<<endl;
    }
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
        solve();
    }
}