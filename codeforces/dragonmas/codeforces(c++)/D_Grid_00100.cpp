#include<bits/stdc++.h>
using namespace std;
int t,n,k;
void solve(){
    int a[301][301]={0};
    int p=0,q=0;
    for(int i=1;i<=k;i++){
        a[p+1][q+1]=1;
        p++;
        q=(q+1)%n;
        if(p==n){
            p=0;
            q=(q+1)%n;
        }
    }
    if(k%n==0)cout<<0<<endl;
    else cout<<2<<endl;
    for(int i=1;i<=n;i++,cout<<endl)for(int j=1;j<=n;j++)cout<<a[i][j];
}
int main(){
    for(cin>>t;t--;){
        cin>>n>>k;
        solve();
    }
}