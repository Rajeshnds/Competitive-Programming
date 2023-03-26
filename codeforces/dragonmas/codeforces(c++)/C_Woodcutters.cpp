#include<bits/stdc++.h>
using namespace std;
int n,a[100001],b[100001];
void solve(){
    int c=a[1],ans=min(2,n);
    for(int i=2;i<n;i++){
        if(c<a[i]-b[i])c=a[i],ans++;
        else if(a[i+1]>a[i]+b[i])ans++,c=a[i]+b[i];
        else c=a[i];
    }
    cout<<ans;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i]>>b[i];
    solve();
}