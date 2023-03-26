#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=3e3+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],dp[N][N];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    string u="";
    for(int i=0;i<=s.size();i++){
        for(int j=0;j<=t.size();j++){
            if(i==0||j==0)dp[i][j]=0;
            else if(s[i-1]==t[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }
    int i=s.size(),j=t.size();
    while(i>0&&j>0){
        if(s[i-1]==t[j-1]){
            u=s[i-1]+u;
            i--;
            j--;
        }
        else if(dp[i-1][j]>dp[i][j-1])i--;
        else j--;
    }
    cout<<u;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>s>>t;
    solve();   
}