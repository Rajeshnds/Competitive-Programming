#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    for(int i=0;i<n;i++){
        if(s[i]=='R')t+='1';
        else if(s[i]=='L')t+='0';
        else if(t.size())t.erase(t.size()-1,1);
        else if(x)x/=2;
    }
    for(int i=0;i<t.size();i++){
        if(t[i]=='1')x=(x*2+1);
        else x=(2*x);
    }
    cout<<x;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>x>>s;
    solve();
}