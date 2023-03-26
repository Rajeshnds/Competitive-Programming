#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
# define ld long double
const int N=1e5+1,mod=1e9+7;
const ll inf=1e18;
ll _T;
ll m,x,y,a[N],b[N],dp[N][21][20];
ll dp1[N][21],dp2[N][21],dp3[N][21];
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
    t="PHS";
    string u="HSP";
    for(int i=1;i<=n;i++){
        for(int j=0;j<=min(i-1,k);j++){
            for(int l=0;l<3;l++){
                if(j==0){
                    if(l==0){
                        dp1[i][j]=dp1[i-1][j]+(u[l]==s[i]);
                    }
                    else if(l==1){
                        dp2[i][j]=dp2[i-1][j]+(u[l]==s[i]);
                    }
                    else{
                        dp3[i][j]=dp3[i-1][j]+(u[l]==s[i]);
                    }
                    // dp[i][j][t[l]-'A']=dp[i-1][j][t[l]-'A']+(u[l]==s[i]);
                }
                else{
                    if(l==0){
                        dp1[i][j]=max(dp2[i-1][j-1],dp3[i-1][j-1])+(u[l]==s[i]);
                    }
                    else if(l==1){
                        dp2[i][j]=max(dp1[i-1][j-1],dp3[i-1][j-1])+(u[l]==s[i]);
                    }
                    else if(l==2){
                        dp3[i][j]=max(dp1[i-1][j-1],dp2[i-1][j-1])+(u[l]==s[i]);
                    }
                }
            }
        }
    }
    k=min(k,n-1);
    for(int i=0;i<=k;i++){
        ans=max(ans,max(dp1[n][i],max(dp2[n][i],dp3[n][i])));
        // for(int j=0;j<3;j++){
        //     ans=max(ans,dp[n][i][t[j]-'A']);
        // }
    }
    cout<<ans;
}
void read_file(){
    freopen("hps.in","r",stdin);
    freopen("hps.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>k;
    char c;
    for(int i=1;i<=n;i++){
        cin>>c;
        s+=c; 
    }
    s='#'+s;
    solve();
}