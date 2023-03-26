#include<bits/stdc++.h>
using namespace std;
int t,n,a[10001],g;
void solve(){
    if(a[1]==1){
        cout<<n+1<<" ";
        for(int i=1;i<=n;i++)cout<<i<<" ";
    }
    else if(a[n]==0){
        for(int i=1;i<=n+1;i++)cout<<i<<" ";
    }
    else if(g){
        for(int i=1;i<=g;i++)cout<<i<<" ";
        cout<<n+1<<" ";
        for(int i=g+1;i<=n;i++)cout<<i<<" ";
    }
    else cout<<-1;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        g=0;
        cin>>a[1];
        for(int i=2;i<=n;i++){
            cin>>a[i];
            if(a[i-1]==0&&a[i]==1)g=i-1;
        }
        solve();
    }
}