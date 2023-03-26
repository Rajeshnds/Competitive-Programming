// #include<bits/stdc++.h>
// using namespace std;
// # define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// # define ll long long
// const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
// ll n,m,x,y,k,ans,sum,a[N],b[N];
// vector<ll>v1,v2;
// vector<vector<ll>>v,dp;
// string s,t;
// void solve(){
//     dp.assign(n+1,vector<ll>(sum+1,0));
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=sum;j++){
//             if(j>=v1[i]){
//                 dp[i][j]=max(dp[i-1][j],v1[i]+dp[i-1][j-v1[i]]);
//             }
//             else dp[i][j]=dp[i-1][j];
//         }
//     }
//     set<int>st;
//     for(int j=1;j<=sum;j++){
//         st.insert(dp[n][j]);
//     }
//     if(*st.begin()==0){
//         st.erase(st.begin());
//     }
//     cout<<st.size()<<endl;
//     for(auto i:st)cout<<i<<" ";
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
//     v1.assign(n+1,0);
//     for(int i=1;i<=n;i++)cin>>v1[i],sum+=v1[i];
//     solve();
// }


#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v1,v2;
vector<vector<ll>>v,dp;
string s,t;
void solve(){
    vector<vector<bool>>dp(n+1,vector<bool>(sum+1,false));
    dp[0][0]=true;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=sum;j++){
            dp[i][j]=dp[i-1][j];
            int left=j-v1[i-1];
            if(left>=0&&dp[i-1][left]){
                dp[i][j]=true;
            }
        }
    }
    for(int i=1;i<=sum;i++){
        if(dp[n][i])v2.push_back(i);
    }
    cout<<v2.size()<<endl;
    for(auto i:v2)cout<<i<<" ";
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
    v1.assign(n,0);
    for(auto &i:v1)cin>>i,sum+=i;
    solve();
}