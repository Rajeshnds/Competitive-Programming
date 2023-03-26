#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,k,a[N];
string s;
vector<pair<int,int>>v1,v2;
map<vector<pair<int,int>>,ll>mp;
set<int>st;
void solve(){
    ll ans=0,e=0;
    int x;
    for(int i=1;i<=n;i++){
        cin>>x;
        v1.clear();
        v2.clear();
        int r=0;
        for(int j=2;j*j<=x;j++){
            int d=0;
            while(x%j==0)x/=j,d++;
            d=d%k;
            if(d)v1.push_back({j,d}),v2.push_back({j,k-d}),r=1;
        }
        if(x>1)v1.push_back({x,1}),v2.push_back({x,k-1}),r=1;
        if(r){
            ans+=mp[v2];
            mp[v1]++;
        }
        else{
            e++;
        }
    }
    cout<<ans+(e*(e-1)/2);
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    cin>>n>>k;
    solve();
}