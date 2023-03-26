#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=100+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],b[N];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
void solve(){
    for(int i=1;i<=n;i++){
        if(b[i]<a[i])swap(a[i],b[i]);
    }
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    cout<<a[n]*b[n];
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
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++)cin>>b[i];
        solve();
    }   
}