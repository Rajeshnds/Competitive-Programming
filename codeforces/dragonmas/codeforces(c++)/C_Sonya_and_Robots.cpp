#include<bits/stdc++.h>
using namespace std;
int n,a[100001],b[100001],k,x;
void solve(){
    long long ans=0;
    for(int i=1;i<=100000;i++){
        ans+=a[i];
    }
    cout<<ans;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        a[x]=k;
        if(b[x]==0)k++,b[x]=1;
    }
    solve();
}