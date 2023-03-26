#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],d;
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){   
    k=log2(d);
    ll ans=0;
    for(int i=0;i<=k;i++){
        if(i<k){
            // ans=(ans*((1<<i)+1))%m;
            ans=(ans+(ans*(1<<i)+(1<<i)))%m;
        }
        else{
            ll l=d-(1<<i)+1;
            ans=(ans+(ans*l+l))%m;
            // ans=(ans*(d-(1<<i)+2))%m;
        }
    }
    // cout<<(ans-1+m)%m;
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
        cin>>d>>m;
        solve();
    }
}

// #include<bits/stdc++.h>
// using namespace std;
// # define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// # define ll long long
// const int N=2e5+5,mod=1e9+7;
// ll _T;
// ll n,d,m,x,y,k,a[N],dp[50][50];
// string s,t;
// vector<ll>v;
// set<ll>st;
// map<ll,ll>mp;
// pair<ll,ll>p[N];
// void solve(){
//     int j=log2(d);
//     dp[1][0]=1;
//     for(int i=1;i<=j;i++){
//         if(i<j){
//             dp[1][i]=(dp[1][i-1]+(1<<i))%m;
//         }
//         else dp[1][i]=(dp[1][i-1]+(d-(1<<i)+1))%m;
//     }
//     for(int i=2;i<=j+1;i++){
//         for(int k=i-1;k<=j;k++){
//             dp[i][k]=(dp[i][k-1]+(dp[i-1][k-1]*dp[i-1][k]))%m;
//             // ll ans=0;
//             // for(int l=i-2;l<k;l++){
//             //     ans=(ans+dp[i-1][l])%m;
//             // }
//             // dp[i][k]=(dp[i][k-1]+(ans*dp[1][k]))%m;
//         }
//     }
//     cout<<dp[j+1][j];
// }
// void read_file(){
//     freopen("traffic.in","r",stdin);
//     freopen("traffic.out","w",stdout);
// }
// int main(){
//     // read_file();
//     fast;
//     for(cin>>_T;_T--;cout<<endl){
//         cin>>d>>m;
//         solve();
//     }
// }






// #include<bits/stdc++.h>
// using namespace std;
// int t,d,m,ans,c;
// int main(){
//  for(cin>>t;t;t--){
//      cin>>d>>m,ans=1,c=log2(d);
//      for(int i=0;i<=c;i++)ans=1ll*ans*(i<c?(1<<i)+1:d-(1<<i)+2)%m;
//      cout<<(ans-1+m)%m<<endl;
//  }
// }