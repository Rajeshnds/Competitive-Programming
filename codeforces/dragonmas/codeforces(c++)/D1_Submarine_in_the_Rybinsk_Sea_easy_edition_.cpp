#include<bits/stdc++.h>
using namespace std;
int n,m=998244353;
void solve(){
    int a;
    long long d,ans=0;
    for(int i=1;i<=n;i++){
        cin>>a;
        d=1;
        while(a){
            int k=a%10;
            a/=10;
            ans=(ans+n*k*11*d)%m;
            d=d*100%m;
        }
    }
    cout<<ans;
}
int main(){
    cin>>n;
    solve();
}