#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
int lcs(int i,int j){
    if(i==s.size()||j==t.size()){
        return 0;
    }
    else if(s[i]==t[j]){
        return 1+lcs(i+1,j+1);
    }
    else return max(lcs(i,j+1),lcs(i+1,j));
}
void solve(){
    // for(int i=0;i<s.size();i++){
    //     for(int j=0;j<t.size();j++){
    //         if(s[i]==t[j]){
    //             dp[i][j]=1+dp[i-1][j-1];
    //         }
    //         else{
    //             dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
    //         }
    //     }
    // }
    // vector<vector<int>dp(305,vector<int>(305,0));
    int dp[3005][3005];
    for(int i=0;i<s.size()+1;i++){
        for(int j=0;j<t.size()+1;j++){
            if(i==0||j==0)dp[i][j]=0;
            else if(s[i-1]==t[j-1])dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
        }
    }
    string u="";
    int i=s.size(),j=t.size();
    while(i>0&&j>0){
        if(s[i-1]==t[j-1])u+=s[i-1],i--,j--;
        else if(dp[i-1][j]>dp[i][j-1])i--;
        else j--;
    }
    reverse(u.begin(),u.end());
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
    // cout<<lcs(0,0);
}