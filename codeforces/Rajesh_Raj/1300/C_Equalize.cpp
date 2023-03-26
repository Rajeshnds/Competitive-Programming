#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
int n;
vector<int>v;
vector<vector<int>>adj;
string s,t;
void solve(){
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]!=t[i]){
            if(i<n-1&&s[i+1]!=t[i+1]&&s[i]!=s[i+1])ans++,i++;
            else ans++;
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
    cin>>n>>s>>t;
    solve();
}