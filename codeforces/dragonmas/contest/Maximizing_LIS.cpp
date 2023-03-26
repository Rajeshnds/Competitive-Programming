#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N];
string s,t;
vector<ll>v1,size1,size2;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    int r=1;
    v1.clear();
    size1.resize(n,0);
    size2.resize(n,0);
    for(int i=1;i<n;i++){
        if(a[i]<=a[i-1])r=0;
    }
    if(r){
        cout<<n;
        return;
    }
    for(int i=0;i<n;i++){
        auto it=lower_bound(v1.begin(),v1.end(),a[i]);
        if(it==v1.end()){
            v1.push_back(a[i]);
        }
        else{
            *it=a[i];
        }
        size1[i]=v1.size();
        a[i]=-a[i];
    }
    v1.clear();
    reverse(a,a+n);
    for(int i=0;i<n;i++){
        auto it=lower_bound(v1.begin(),v1.end(),a[i]);
        if(it==v1.end()){
            v1.push_back(a[i]);
        }
        else{
            *it=a[i];
        }
        size2[i]=v1.size();
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,size1[i]+size2[n-i-1]);
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
        for(int i=0;i<n;i++)cin>>a[i];
        solve();
    }
}



