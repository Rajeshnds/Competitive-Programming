#include<bits/stdc++.h>
using namespace std;
int t,k,a[100001],m=1e9+7,x,y;
void solve(){
    cout<<(a[y]-a[x-1]+m)%m<<endl;
}
int main(){
    a[0]=1;
    cin>>t>>k;
    for(int i=1;i<=100000;i++){
        a[i]=(a[i-1]+(i>=k?a[i-k]:0))%m;
    }
    for(int i=1;i<=100000;i++){
        a[i]=(a[i]+a[i-1])%m;
    }
    for(int i=1;i<=t;i++){
        cin>>x>>y;
        solve();
    }
}