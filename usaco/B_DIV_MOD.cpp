#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a,l,r;
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    k=r/a;
    x=k*a;
    if(l==r){
        cout<<k+r-x;
    }
    else if(x+a-1<=r)cout<<k+a-1;
    else if(l<=x-1){
        cout<<k+a-2;
    }
    else{
        cout<<k+r-x;
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>l>>r>>a;
        solve();
    }   
}