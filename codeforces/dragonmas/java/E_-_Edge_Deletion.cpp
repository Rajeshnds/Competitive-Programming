#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=1e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N],dp[305][305],c[N];
vector<vector<ll>>v;
string s,t;
void solve(){
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
            }
        }
    }
    for(int i=1;i<=m;i++){
        int a1=a[i],b1=b[i];
        if(dp[a1][b1]<c[i]){
            ans++;
            continue;
        }
        for(int j=1;j<=n;j++){
            if(j==a1||j==b1)continue;
            if(dp[a1][j]+dp[j][b1]==c[i]){
                ans++;
                break;
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
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j)dp[i][j]=0;
            else dp[i][j]=inf;
        }
    }
    for(int i=1;i<=m;i++){
        cin>>a[i]>>b[i]>>c[i];
        dp[a[i]][b[i]]=c[i];
        dp[b[i]][a[i]]=c[i];
        // dp[a[i]][b[i]]=min(dp[a[i]][b[i]],c[i]);
        // dp[b[i]][a[i]]=min(dp[b[i]][a[i]],c[i]);
    }
    solve();
}