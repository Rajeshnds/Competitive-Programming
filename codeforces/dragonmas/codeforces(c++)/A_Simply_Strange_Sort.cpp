#include<bits/stdc++.h>
using namespace std;
int t,n,a[1001];
void solve(){
    int ans=0;
    while(!is_sorted(a+1,a+n+1)){
        ans++;
        if(ans%2==1){
            for(int i=1;i<n;i+=2){
                if(a[i]>a[i+1])swap(a[i],a[i+1]);
            }
        }
        else{
            for(int i=2;i<n;i+=2){
                if(a[i]>a[i+1])swap(a[i],a[i+1]);
            }
        }
    }
    cout<<ans;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        for(int i=1;i<=n;i++)cin>>a[i];
        solve();
    }
}