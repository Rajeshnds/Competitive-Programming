#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[18],l,r;
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    int ans=0;
    for(int j=0;j<17;j++){
        if(a[j]*2>r+1)ans+=(1<<j);
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
    for(cin>>_T;_T--;cout<<endl){
        cin>>l>>r;
        fill(a,a+18,0);
        for(int i=1;i<=r+1;i++){
            cin>>x;
            for(int j=0;j<17;j++){
                if(x&(1<<j)){
                    a[j]++;
                }
            }
        }
        solve();
    }
}