#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=1e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
int n;
vector<int>v;
vector<vector<int>>adj;
string s;
void solve(){
    // int size=s.size();
    // int ans=0;
    // int index=-1;
    // for(int i=1;i<size;i++){
    //     if(i+1<size&&s[i]==s[i-1]&&s[i]==s[i+1]){
    //         ans+=2;
    //         index=i+1;
    //         i+=2;
    //     }
    //     else if(s[i]==s[i-1]){
    //         ans++;
    //         index=i;
    //         i++;
    //     }
    //     else if(i>index+2&&s[i]==s[i-2]){
    //         ans++;
    //         index=i;
    //         if(i+1<size&&s[i+1]==s[i-1])ans++,i++,index=i;
    //         i++;
    //     }
    // }
    // cout<<ans;
    // int ans=0;
    // for(int i=1;i<s.size();i++){
    //     if(s[i]==s[i-1]||(i>1&&s[i]==s[i-2])){
    //         s[i]='0';
    //         ans++;
    //     }
    // }
    // cout<<ans;
    int dp[N][26][26];
    memset(dp,0,sizeof(dp));
    int size=s.size();
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1])dp[i][s[i]-'a'][s[i-1]-'a']=dp[i-1][s[i]-'a'][s[i-1]-'a']+1;
        if(i>1&&s[i]==s[i-2])dp[i][s[i]-'a'][s[i-2]-'a']=dp[i-2][s[i]-'a'][s[i-2]-'a']+1;
    }
    cout<<dp[size-1][s[size-1]-'a'][s[size-2]-'a']+dp[size-1][s[size-2]-'a'][s[size-3]-'a'];
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>s;
        solve();
    }
}