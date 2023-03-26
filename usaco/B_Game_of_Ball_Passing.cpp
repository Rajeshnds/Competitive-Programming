#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],sum;
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    if(sum==0){
        cout<<0;
        return;
    }
    sum-=a[n];
    if(a[n]>sum){
        cout<<a[n]-sum;
    }
    else cout<<1;
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
        sum=0;
        for(int i=1;i<=n;i++)cin>>a[i],sum+=a[i];
        sort(a+1,a+n+1);
        solve();
    }
}