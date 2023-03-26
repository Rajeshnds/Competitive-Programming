#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,a[N],b[N],m;
void solve(){
    int ans=0;
    for(int i=1;i<=n;){
        int j=1;
        if(a[i]>b[1]){
            cout<<-1;
            return;
        }
        int k=a[i];
        while(i<=n&&k<=b[j])j++,i++,k=max(k,a[i]);
        ans++;
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
    int p,q;
    for(cin>>t;t--;cout<<endl){
        fill(b,b+n+1,0);
        cin>>n;
        for(int i=1;i<=n;i++)cin>>a[i];
        cin>>m;
        for(int i=1;i<=m;i++){
            cin>>p>>q;
            b[q]=max(b[q],p);
        }
        for(int i=n-1;i>=1;i--)b[i]=max(b[i+1],b[i]);
        solve();
    }
}