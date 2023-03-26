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
    int r=0;
    for(int i=1;i<=n-3;i++){
        if(a[i]^a[i+1]==a[i+2]^a[i+3]){
            cout<<i<<" "<<i+1<<" "<<i+2<<" "<<i+3;
            r=1;
        }
        else if(a[i]^a[i+3]==a[i+1]^a[i+2]){
            cout<<i<<" "<<i+3<<" "<<i+1<<" "<<i+2;
            r=1;
        }
        else if(a[i]^a[i+2]==a[i+1]^a[i+3]){
            cout<<i<<" "<<i+2<<" "<<i+1<<" "<<i+3;
            r=1;
        }
        if(r)return;
    }
    cout<<-1;
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
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        solve();
    }   
}