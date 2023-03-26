#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
const int N=2e5+5;
int t,n,a[N];
void solve(){
    int m=a[1];
    for(int i=2;i<=n;i++){
        m=max(m,a[i]-a[i-1]);
    }
    cout<<m;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        for(int i=1;i<=n;i++)cin>>a[i];
        sort(a+1,a+n+1);
        solve();
    }
}
