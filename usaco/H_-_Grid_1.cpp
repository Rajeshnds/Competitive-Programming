#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],dp[1005][1005],h,w;
string s[1005],t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    dp[0][0]=1;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(s[i][j]=='#'){
                dp[i][j]=0;
            }
            else{
                if(j-1>=0){
                    dp[i][j]+=dp[i][j-1];
                }
                if(i-1>=0){
                    dp[i][j]+=dp[i-1][j];
                }
                dp[i][j]%=mod;
            }
        }
    }
    cout<<dp[h-1][w-1];
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>h>>w;
    for(int i=0;i<h;i++)cin>>s[i];
    solve();
}