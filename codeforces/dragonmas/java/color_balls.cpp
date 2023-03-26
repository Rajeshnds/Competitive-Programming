#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
# define ld long double
const int N=100+5,mod=1e9+7;
const ll inf=1e18;
ll _T;
ll n,m,x,y,k,a[N],b[N][N];
ll ans=0,sum1=0,sum2=0;
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
ll calculate(int d,int e,int f){
    ll ans=0;
    for(int i=e;i<=d;i++){
        ans+=b[i][f];
    }
    return ans;
}
void solve(){
    int j=0,l=0;
    for(int i=1;i<=n;){
        if(a[i]==0){
            while(i<=n&&a[i]==0){
                vv[j].push_back(i);
                v.push_back(i);
                i++;
            }
            j++;
        }
        else{
            while(i<=n&&a[i]==a[i+1])i++;
            l++;
            i++;
        }
    }
    if(l==k){
        for(int i=0;i<j;i++){
            int d=vv[i].back();
            int e=*vv[i].begin();
            if(e==1){
                int f=a[d+1];
                ans+=calculate(d,e,f);
            }
            else if(d==n){
                int f=a[e-1];
                ans+=calculate(d,e,f);
            }
            else{
                int f=a[e-1];
                sum1=calculate(d,e,f);
                f=a[d+1];
                sum2=calculate(d,e,f);
                ans+=min(sum1,sum2);
            }
        }
    }
    else{
        
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl){
        cin>>n>>m>>k;
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>b[i][j];
            }
        }
        solve();
    // }
}