#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
int n;
vector<int>v;
vector<vector<int>>adj;
string s;
void solve(){
    ll ans=1;
    int divider=1;
    ll count=1;
    for(int i=n;i>n/2;i--){
        ans*=i;
        ans/=divider;
        count*=divider;
        divider++;
    }
    ans/=2;
    count/=(n/2);
    count*=count;
    ans*=count;
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
    cin>>n;
    solve();
}