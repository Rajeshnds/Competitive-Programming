#include<bits/stdc++.h>
using namespace std;
int t,n,a[200001],b[100001];
void solve(){
    int j=1,ans=INT_MAX;
    for(int i=1;i<=2*n;i+=2){
        while(b[j]<i)j++;
        ans=min(ans,a[i]-1+j-1);
    }
    cout<<ans;
}
int main(){
    int k;
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        for(int i=1;i<=n;i++)cin>>k,a[k]=i;
        for(int i=1;i<=n;i++)cin>>b[i];
        solve();
    }
}