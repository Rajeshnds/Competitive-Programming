#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=100+5,mod=1e9+7;
ll _T;
int n,m,x,y,k,a[N];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<int,int>p[N];
void solve(){
    for(int i=0;i<n;i++){
        if(p[i].first<=k){
            k+=p[i].second;
        }
    }
    cout<<k;
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
        for(int i=0;i<n;i++){
            cin>>p[i].first;
        }
        for(int i=0;i<n;i++)cin>>p[i].second;
        sort(p,p+n);
        solve();
    }   
}