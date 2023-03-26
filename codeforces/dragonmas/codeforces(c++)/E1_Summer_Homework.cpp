#include<bits/stdc++.h>
using namespace std;
const int mod=1e9;
int n,m,t,b,c;
long long f[200001],sum,a[200001];
void solve(){
    if(t==1){
        a[b]=c;
    }
    else if(t==2){
        sum=0;
        for(int i=0;i<=c-b;i++){
            sum=(sum+f[i]*a[b+i])%mod;
        }
        cout<<sum<<endl;
    }
}
int main(){
    f[0]=1;
    f[1]=1;
    cin>>n>>m;
    for(int i=2;i<=n;i++)f[i]=(f[i-1]+f[i-2])%mod;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=m;i++){
        cin>>t>>b>>c;
        solve();
    }
}