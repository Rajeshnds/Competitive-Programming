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
void solve(){
    ll i=n,ans=0;
    while(i>=1&&a[i]==a[n])i--;
    k=n-i;
    while(i>=1){
        int j=0,r=0;
        while(i>=1&&j<k){
            if(a[i]!=a[n]){
                r=1;
            }
            i--;
            j++;
        }
        ans+=r;
        k*=2;
        while(i>=1&&a[i]==a[n])k++,i--;
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
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        solve();
    }   
}