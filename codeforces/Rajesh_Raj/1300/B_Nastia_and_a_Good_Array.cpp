#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
int n,a[N];
void solve(){
    int prime=1000000009;
    cout<<n/2<<endl;
    for(int i=1;i<n;i+=2){
        cout<<i<<" "<<i+1<<" "<<min(a[i-1],a[i])<<" "<<prime<<endl;
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;){
        cin>>n;
        for(int i=0;i<n;i++)cin>>a[i];
        solve();
    }
}