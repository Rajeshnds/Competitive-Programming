#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],l[N],r[N];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    int j=0;
    ll ans=0;
    for(int i=0;i<s.size()&&j<t.size();i++){
        if(s[i]==t[j])l[j++]=i;
    }
    j=t.size()-1;
    for(int i=s.size()-1;i>=0&&j>=0;i--){
        if(s[i]==t[j])r[j--]=i;
    }
    ans=max(r[0],s.size()-l[t.size()-1]-1);
    for(int i=1;i<t.size();i++){
        ans=max(ans,r[i]-l[i-1]-1);
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
    // for(cin>>_T;_T--;cout<<endl)
    cin>>s>>t;
    solve();
}