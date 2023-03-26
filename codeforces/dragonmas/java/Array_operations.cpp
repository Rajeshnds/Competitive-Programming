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
vector<ll>v,v2,v3;
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
    while(true){
        int y=x;
        v2.clear();
        if(v.size()<=1)break;
        for(int i=v.size()-1;i>=0;i--){
            if(i==0&&y){x--;v2.push_back(v[i]);break;}
            else if(i==0)break;
            v[i]-=v[i-1];
            if(v[i]==0)x++;
            else v2.push_back(v[i]);
        }
        // for(auto i:v)cout<<i<<" ";cout<<endl;
        v=v2;
        sort(v.begin(),v.end());
    }
    if(v.size()==0)cout<<0;
    else cout<<v.back();
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
        v.clear();
        x=0;
        for(int i=1;i<=n;i++){
            cin>>k;
            if(k==0)x++;
            else v.push_back(k);
        }
        sort(v.begin(),v.end());
        // for(auto i:v)cout<<i<<" ";
        // cout<<x;
        solve();
    }
}


