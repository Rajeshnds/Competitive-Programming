#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,a[N];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N],k;
priority_queue<pair<int,int>>q;
void solve(){
    ll ans=0;
    v.clear();
    for(int i=1;i<=2*n;i++){
        v.push_back(p[i].second);
        ans+=p[i].first;
    }
    sort(v.begin(),v.end());
    cout<<ans<<endl;
    for(int i=0;i<n;i++){
        cout<<mp[v[i]]<<" "<<mp[v[2*n-i-1]]<<endl;
    }
}   
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;){
        cin>>n>>m;
        mp.clear();
        for(int i=1;i<=m;i++){
            cin>>p[i].second>>p[i].first;
            mp[p[i].second]=i;
        }
        sort(p+1,p+m+1);
        solve();
    }   
}