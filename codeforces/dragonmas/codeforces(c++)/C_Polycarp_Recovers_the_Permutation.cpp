#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,a[N];
void solve(){
    if(a[0]==n||a[n-1]==n){
        for(int i=n-1;i>=0;i--)cout<<a[i]<<" ";
        return;
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
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        for(int i=0;i<n;i++)cin>>a[i];
        solve();
    }
}