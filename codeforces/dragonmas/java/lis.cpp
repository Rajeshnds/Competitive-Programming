// #include<bits/stdc++.h>
// using namespace std;
// # define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// # define ll long long
// const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
// ll n,m,x,y,k,ans,sum,a[N],b[N],dp[N];
// vector<vector<ll>>v;
// string s,t;
// void solve(){
//     // for(int i=1;i<=n;i++){
//     //     dp[i]=1;
//     //     for(int j=1;j<=i;j++){
//     //         if(a[i]>a[j]){
//     //             dp[i]=max(dp[i],dp[j]+1);
//     //         }
//     //     }
//     //     ans=max(ans,dp[i]);
//     // }
//     // cout<<ans;
//     vector<int>v;
//     v.push_back(a[1]);
//     for(int i=2;i<=n;i++){
//         if(a[i]>v.back()){
//             v.push_back(a[i]);
//         }
//         else{
//             int j=lower_bound(v.begin(),v.end(),a[i])-v.begin();
//             v[j]=a[i];
//         }
//     }
//     cout<<v.size();
// }
// void read_file(){
//     freopen("traffic.in","r",stdin);
//     freopen("traffic.out","w",stdout);
// }
// int main(){
//     // read_file();
//     fast;
//     // for(cin>>_T;_T--;cout<<endl)
//     cin>>n;
//     for(int i=1;i<=n;i++)cin>>a[i];
//     solve();
// }

#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
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
    for(int i=1;i<=n;i++){
        if(dp[i][i]==inf)cout<<-1;
        else cout<<dp[i][i]<<endl;
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            dp[i][j]=inf;
            // else dp[i][j]=inf;
        }
    }
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i]>>b[i]>>c[i];
        dp[a[i]][b[i]]=min(dp[a[i]][b[i]],c[i]);
    }
    solve();
}