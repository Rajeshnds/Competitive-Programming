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
int substring(string u){
    int j=0;
    for(int i=0;i<u.size();i++){
        if(j<t.size()&&u[i]==t[j])j++;
    }
    if(j==t.size()){
        return 0;
    }
    else return 1;
}
void solve(){
    string v="abcde";
    for(int i=0;i<5;i++){
        string u="";
        for(int j=0;j<s.size();j++){
            if(s[j]=='?')u+=v[i];
            else u+=s[j];
        }
        if(substring(u)){
            cout<<u;
            return;
        }
    }
    cout<<-1;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>n>>m>>s>>t;
        solve();
    }
}