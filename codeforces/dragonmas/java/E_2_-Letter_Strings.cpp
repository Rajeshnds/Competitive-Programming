#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
# define ld long double
const int N=200+5,mod=1e9+7;
const ll inf=1e18;
ll _T;
ll n,m,x,y,k,a[N],b[N];
ll ans=0,sum=0;
ld ansd=0,sumd=0;
map<string,int>ms;
string s,t;
vector<ll>v;
vector<vector<ll>>vv;
vector<pair<ll,ll>>vp;
pair<ll,ll>p[N];
priority_queue<ll>pq;
queue<ll>q;
set<char>st[15];
set<pair<ll,ll>>stp;
set<vector<ll>>stv;
map<ll,ll>mll;
map<ll,vector<ll>>mlv;
map<ll,pair<ll,ll>>mlp;
map<pair<ll,ll>,ll>mpl;
map<ll,map<ll,ll>>mm;
void solve(){
    // ll d=0,e=0;
    // for(int i='a';i<='k';i++){
    //     for(int j='a';j<='k';j++){
    //         x=0;
    //         for(int k='a';k<='k';k++){
    //             if(k!=j)x+=a[i][k];
    //         }
    //         d+=a[i][j]*x;
    //     }
    // }
    // for(int i='a';i<='k';i++){
    //     for(int j='a';j<='k';j++){
    //         x=0;
    //         for(int k='a';k<='k';k++){
    //             if(k!=j)x+=b[i][k];
    //         }
    //         e+=b[i][j]*x;
    //     }
    // }
    // cout<<d/2+e/2;
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
        ms.clear();
        ans=0;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        for(int i=0;i<n;i++){
            cin>>s;
            ans+=a[s[0]]+b[s[1]]-2*ms[s];
            a[s[0]]++;
            b[s[1]]++;
            ms[s]++;
        }
        cout<<ans;
        // solve();
    }
}