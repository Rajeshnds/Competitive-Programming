#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v1,v2,v3;
vector<vector<ll>>v,dp;
string s,t;
void solve(){
    // dp.assign(n+1,vector<ll>(n+1,0));
    ans=0;
    n=s.size();
    v1.assign(n,0);
    int j=-1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1')j=i;
        v1[i]=j;
    }
    for(int i=0;i<s.size();i++){
        sum=0;
        for(int j=i;j>=0&&i-j<20;j--){
            if(s[j]=='0')continue;
            sum+=(1<<(i-j));
            if(sum<=i-(j==0?-1:v1[j-1]))ans++;
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
    // v1.assign(n,0);
    for(cin>>_T;_T--;cout<<endl){
        cin>>s;
        // reverse(s.begin(),s.end());
        solve();
    }
}
