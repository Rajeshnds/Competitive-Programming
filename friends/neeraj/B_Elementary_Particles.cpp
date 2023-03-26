#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=150000+5,mod=1e9+7;
int _T;
int n,m,x,y,k,a[N];
string s,t;
vector<vector<int>>v;
set<int>st;
map<int,int>mp;
pair<int,int>p[N];
void solve(){
    int ans=-1;
    for(int i=1;i<=n;i++){
        if(v[a[i]].size()>1){
            ans=max(ans,i+n-v[a[i]][1]);
            v[a[i]].erase(v[a[i]].begin());
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
    for(cin>>_T;_T--;cout<<endl){
        cin>>n;
        v.assign(N,{});
        for(int i=1;i<=n;i++){
            cin>>a[i];
            v[a[i]].push_back(i);
        }
        solve();
    }   
}