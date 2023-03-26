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
    // dp.assign(n+1,vector<ll>(n+1,0));
    v2.push_back(v1[0]);
    for(int i=1;i<n;i++){
        if(v2.back()<v1[i]){
            v2.push_back(v1[i]);
        }
        else{
            int j=lower_bound(v2.begin(),v2.end(),v1[i])-v2.begin();
            v2[j]=v1[i];
        }
    }
    cout<<v2.size();
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
    v1.assign(n,0);
    for(auto &i:v1)cin>>i;
    solve();
}