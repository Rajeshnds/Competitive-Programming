#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
# define ld long double
const int N=1e5+5,mod=1e9+7;
const ll inf=1e18;
ll _T;
ll m,x,y,a[N],b[N],dp[N][25][3];
int n,k;
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
    int u[]={1,2,0};
    for(int i=1;i<=n;i++){
        for(int j=0;j<=min(i,k);j++){
            for(int l=0;l<3;l++){
                if(a[i]==u[l])dp[i][j][l]++;
                dp[i+1][j][l]=max(dp[i+1][j][l],dp[i][j][l]);
                if(l!=0){
                    dp[i+1][j+1][0]=max(dp[i+1][j+1][0],dp[i][j][l]);
                }
                if(l!=1){
                    dp[i+1][j+1][1]=max(dp[i+1][j+1][1],dp[i][j][l]);
                }
                if(l!=2){
                    dp[i+1][j+1][2]=max(dp[i+1][j+1][2],dp[i][j][l]);
                }
            }
        }
    }
    for(int i=0;i<3;i++){
        ans=max(ans,dp[n][min(n-1,k)][i]);
    }
    cout<<ans;
}
void read_file(){
    freopen("hps.in","r",stdin);
    freopen("hps.out","w",stdout);
}
int main(){
    read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        char c;
        cin>>c;
        if(c=='P'){
            a[i]=0;
        }
        else if(c=='H'){
            a[i]=1;
        }
        else a[i]=2;
    }
    solve();
}

