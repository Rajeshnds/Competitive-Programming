#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],b[N],a1,a2,a3,a4;
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    a1=mod;a2=mod;a3=mod;a4=mod;
    for(int i=1;i<=n;i++){
        a1=min(a1,abs(a[1]-b[i]));
        a2=min(a2,abs(b[1]-a[i]));
        a3=min(a3,abs(a[n]-b[i]));
        a4=min(a4,abs(b[n]-a[i]));
    }
    cout<<min(min(abs(a[1]-b[1]),a1+a2)+min(abs(a[n]-b[n]),a3+a4),
    min(abs(a[1]-b[n]),a1+a4)+min(abs(b[1]-a[n]),a3+a2));
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