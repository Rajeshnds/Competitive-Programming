#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=1e6+5,mod=1e9+7;
const ll inf=1e18;
ll _T;
ll n,m,x,y,k,a[N],dp[101][101];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
            }
        }
    }
    v.push_back(a[1]);
    for(int i=2;i<=m;i++){
        if(dp[v.back()][a[i]]<dp[v.back()][a[i-1]]+dp[a[i-1]][a[i]]){
            v.push_back(a[i-1]);
            // cout<<
        }
    }
    v.push_back(a[m]);
    cout<<v.size()<<endl;
    for(auto i:v)cout<<i<<" ";
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j)dp[i][j]=0;
            else dp[i][j]=inf;
        }
    }
    for(int i=1;i<=n;i++){
        cin>>s;
        for(int j=0;j<n;j++){
            if(s[j]=='1'){
                dp[i][j+1]=min(dp[i][j+1],1ll);
            }
        }
    }
    cin>>m;
    for(int i=1;i<=m;i++)cin>>a[i];
    solve();
}