#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
int n,k;
vector<int>v;
vector<vector<int>>adj;
string s;
void solve(){
    sort(v.begin(),v.end());
    int j=n-(2*k);
    int ans=0;
    for(int i=0;i<j;i++)ans+=v[i];
    for(int i=n-k;i<n;i++,j++){
        ans+=(v[j]/v[i]);
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
    for(cin>>_T;_T--;cout<<endl){
        cin>>n>>k;
        v.assign(n,0);
        for(int i=0;i<n;i++)cin>>v[i];
        solve();
    }
}