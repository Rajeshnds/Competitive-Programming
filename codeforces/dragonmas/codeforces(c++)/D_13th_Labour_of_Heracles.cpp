#include<bits/stdc++.h>
using namespace std;
long long t,n,a[100001],b[100001],ans;
void solve(){
    int j=0,d[100001]={0};
    for(int i=1;i<=n;i++){
        b[i]--;
        while(b[i]--)d[j++]=a[i];
    }
    sort(d,d+j);
    cout<<ans<<" ";
    for(int i=j-1;i>=0;i--){
        ans+=d[i];
        cout<<ans<<" ";
    }
}
int main(){
    int x,y;
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        ans=0;
        fill(b,b+n+1,0);
        for(int i=1;i<=n;i++)cin>>a[i],ans+=a[i];
        for(int i=1;i<n;i++){
            cin>>x>>y;
            b[x]++;
            b[y]++;
        }
        solve();
    }
}