#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
# define ld long double
const int N=1e5+5,mod=1e9+7;
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
    int r=1;
    memset(b,-1,sizeof(b));
    a[0]=-1;
    for(int i=1;i<=n;i++){
        if(b[i]==-1){
            if(a[i]==0){
                b[i+1]=0;
            }
            else if(a[i]==1){
                b[i+1]=2;
            }
            else if(a[i]==2){
                
            }
            else if(a[i]==3){

            }
        }
        else if(b[i]==0){
            // if(a[i]==0){

            // }
            if(a[i]==1){
                b[i+1]=2;
            }
            else if(a[i]==2){
                // b[i]=2;
                if(a[i-1]==2)r=0;
                if(i>1&&a[i-1]==0)r=0;
            }
            else if(a[i]==3){
                if(a[i-1]==2)r=0;
                if(i>1&&a[i-1]==0)r=0;
                b[i+1]=2;
            }
        }
        // else if(b[i]==1){

        // }
        else if(b[i]==2){
            if(a[i]==0||a[i]==1){
                r=0;
            }
            // else if(a[i]==1){

            // }
            // else if(a[i]==2){

            // }
            else if(a[i]==3){
                b[i+1]=2;
            }
        }
    }
    cout<<(r?"YES":"NO");
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
        for(int i=1;i<=n;i++)cin>>a[i];
        solve();
    }
}