#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,m,a[N],b[N];
void shortcut(){
    int ans=0;
    b[0]=b[1];
    b[m+1]=b[m];
    for(int i=0;i<n;i++){
        int k=lower_bound(b+1,b+m+1,a[i])-b;
        ans=max(ans,min(abs(a[i]-b[k-1]),abs(b[k]-a[i])));
    }
    cout<<ans;
}
void solve(){
    int ans=0;
    if(a[0]<b[1]){
        ans=b[1]-a[0];
    }
    if(a[n-1]>b[m]){
        ans=max(ans,a[n-1]-b[m]);
    }
    int k=1,l=2,i=0;
    while(i<n&&a[i]<b[k])i++;
    while(l<=m){
        for(;i<n&&a[i]<=b[l]&&a[i]>=b[k];i++){
            ans=max(ans,min(a[i]-b[k],b[l]-a[i]));
        }
        k++;l++;
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
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=1;i<=m;i++)cin>>b[i];
    solve();
    // shortcut();
}