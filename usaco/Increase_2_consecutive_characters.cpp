#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],l,r,q,b[N];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    if((b[r]-b[l-1])%26==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;){
        cin>>n>>q>>s>>t;
        s=' '+s;
        t=' '+t;
        for(int i=1;i<=n;i++){
            a[i]=(t[i]-s[i]+26)%26;
        }
        for(int i=1;i<=n;i++){
            if(i&1)b[i]=b[i-1]+a[i];
            else b[i]=b[i-1]-a[i];
        }
        for(int i=1;i<=q;i++){
            cin>>l>>r;
            solve();
        }
    }   
}