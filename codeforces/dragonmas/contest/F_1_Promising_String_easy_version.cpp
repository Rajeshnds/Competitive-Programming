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
    ll ans=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int k=a[j]-a[i-1];
            int l=b[j]-b[i-1];
            if(k<=l){
                int d=l-k;
                if(d%3==0)ans++;
            }
        }
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
        cin>>n>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='+'){
                if(i>0){
                    a[i]=a[i-1]+1;
                    b[i]=b[i-1];
                }
                else{
                    a[i]=1;
                    b[i]=0;
                }
            }
            else{
                if(i>0){
                    b[i]=b[i-1]+1;
                    a[i]=a[i-1];
                }
                else{
                    b[i]=1;
                    a[i]=0;
                }
            }
        }
        solve();
    }
}