#include<bits/stdc++.h>
using namespace std;
int n,m,a[200001],b[200001],c[200001],ans;
void solve(){
    for(int i=1;i<=n;i++){
        b[i]=1;
        if(a[i]>a[i-1])b[i]+=b[i-1];
        ans=max(ans,b[i]);
    }
    for(int i=n;i>0;i--){
        c[i]=1;
        if(a[i]<a[i+1])c[i]+=c[i+1];
    }
    for(int i=1;i<=n;i++){
        if(a[i+1]>a[i-1])ans=max(ans,b[i-1]+c[i+1]);
    }
    cout<<ans;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    solve();
}