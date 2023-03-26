#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=1e7,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N+1],b[N+1],c;
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp,mp2;
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
    for(int i=1;i<=1e7;i++){
        for(int j=i;j<=1e7;j+=i){
            a[j]+=i;
        }
        if(a[i]<=N&&!b[a[i]])b[a[i]]=i;
    }
    for(cin>>_T;_T--;cout<<endl){
        cin>>c;
        if(b[c]){
            cout<<b[c];
        }
        else cout<<-1;
        // solve();
    }
}