#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],w,e,c;
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){

}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl){
        cin>>n>>m;
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=m;i++){
            cin>>c>>x;
            for(int j=1;j<=x;j++){
                cin>>w>>e;
                a[e]=(a[e]+w*a[c])%mod;
            }
            a[c]=0;
        }
        for(int i=1;i<=n;i++)cout<<a[i]<<endl;

    // }   
}