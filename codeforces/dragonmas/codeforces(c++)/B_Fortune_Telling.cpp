#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,a[N];
ll x,y;
vector<int>v[N];
string s;
void solve(){
    if(x%2==y%2)cout<<"Alice";
    else cout<<"Bob";
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>t;t--;cout<<endl){
        cin>>n>>x>>y;
        int b;
        for(int i=0;i<n;i++)cin>>b,x+=b;
        solve();
    }
}


