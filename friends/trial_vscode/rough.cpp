#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int t,n,x,a[505];
void solve(){
    int ans=0;
    for(int i=1;i<=n;i++){
        if(is_sorted(a,a+n+1))break;
        else{
            for(int j=1;j<=n;j++){
                if(a[i]>x)swap(a[i],x),ans++;
            }
        }
    }
    if(is_sorted(a,a+n+1))cout<<ans;
    else cout<<-1;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>t;t--;cout<<endl){
        cin>>n>>x;
        for(int i=1;i<=n;i++)cin>>a[i];
        solve();
    }
}
