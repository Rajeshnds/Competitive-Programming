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
    ll j=1;
    int r=1;
    v.clear();
    for(int i=1;i<=n;i++){
        if(j>1e9){
            r=0;
            break;
        }
        v.push_back(j);
        j=(j*2)+j;
    }
    if(!r){
        cout<<"NO";
    }
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)cout<<v[i]<<" ";
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
        cin>>n;
        solve();
    }   
}