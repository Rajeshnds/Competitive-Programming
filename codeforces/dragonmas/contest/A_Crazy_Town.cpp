#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,c1,a,b,c,d1,c2,d2;
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    int ans=0;
    for(int i=1;i<=n;i++){
        cin>>a>>b>>c;
        k=(a*c1)+(b*d1)+c;
        ll l=(a*c2)+(b*d2)+c; 
        if((k>0&&l<0)||(k<0&&l>0))ans++;
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
    cin>>c1>>d1>>c2>>d2>>n;
    solve();
}