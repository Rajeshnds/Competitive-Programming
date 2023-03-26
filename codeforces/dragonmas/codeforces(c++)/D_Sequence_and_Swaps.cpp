#include<bits/stdc++.h>
using namespace std;
int t,n,x,a[501];
void solve(){
    int ans=0;
    for(int i=1;i<=n;i++){
        if(is_sorted(a+1,a+n+1))break;
        if(a[i]>x)swap(a[i],x),ans++;
    }
    cout<<(is_sorted(a+1,a+n+1)?ans:-1);
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>x;
        for(int i=1;i<=n;i++)cin>>a[i];
        solve();
    }
}