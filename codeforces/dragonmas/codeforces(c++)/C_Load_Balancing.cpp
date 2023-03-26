#include<bits/stdc++.h>
using namespace std;
int n,a[100001],s;
void solve(){
    int k=s/n,ans=0,d=s%n;
    for(int i=1;i<=n;i++){
        if(a[i]>k){
            ans+=(a[i]-k);
            if(d)ans--,d--;
        }
    }
    cout<<ans;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i],s+=a[i];
    solve();
}