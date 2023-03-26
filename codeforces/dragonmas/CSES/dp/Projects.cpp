#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v1(N),v2(N),v3(N);
// vector<vector<ll>>v;
// vector<pair<pair<ll,ll>,ll>>v;
vector<tuple<ll,ll,ll>>v;
string s,t;
void solve(){
    // v.assign(n+1,vector<ll>(n+1,0));
    ll bestTotalReward=0;
    map<ll,ll>dp;
    dp[0]=0;
    // for(auto tuple: tuples){
    //     tie()=tuple;
    // }
    for(int i=0;i<n;i++){
        ll start,end,reward;
        tie (end,start,reward) = v[i];
        auto it=dp.lower_bound(start);
        it--;
        // ll totalReward=(*it).second+reward;
        ll totalReward=it->second+reward;
        bestTotalReward=max(bestTotalReward,totalReward);
        dp[end]=bestTotalReward;
    }
    cout<<bestTotalReward;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // v1.assign(n,0);
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n;
    v.assign(n,{});
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        v[i]={b,a,c};
        // v.push_back({{b,a},c});
    }
    sort(v.begin(),v.end());
    solve();
}