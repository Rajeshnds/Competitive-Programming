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
set<ll>st,st1,st2;
set<pair<ll,ll>>stp;
set<vector<ll>>stv;
map<ll,ll>mll;
map<ll,vector<ll>>mlv;
map<ll,pair<ll,ll>>mlp;
map<pair<ll,ll>,ll>mpl;
map<ll,map<ll,ll>>mm;
void solve(){
    for(ll i=1;i*i<=y;i++){
        if(y%i==0){
            st1.insert(i);
            st1.insert(y/i);
        }
    }
    for(ll i=1;i*i<=x;i++){
        if(x%i==0){
            st2.insert(i);
            st2.insert(x/i);
        }
    }
    for(auto i:st1){
        st.insert(i);
        for(auto j:st2){
            st.insert(j*i);
        }
    }
    for(auto i:st2){
        st.insert(i);
        for(auto j:st1){
            st.insert(y*i);
        }
    }
    cout<<st.size();
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>x>>y;
    solve();
}