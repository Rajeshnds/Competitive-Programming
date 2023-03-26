#include<bits/stdc++.h>
using namespace std;
int t,n,m,a[100001],r,j;
void solve(){
    double p,q=1,ans=0;
    for(int i=1;i<=m;i++){
        cin>>r>>p;
        if(r>=j)ans+=q*p,q*=(1-p);
    }
    if(j==0)ans=1;
    cout<<fixed<<setprecision(10)<<ans;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>m;
        for(int i=1;i<=n;i++)cin>>a[i];
        j=n;
        while(j>0&&a[j]==j)j--;
        solve();
    }
}