#include<bits/stdc++.h>
using namespace std;
long long n,r=1e9+7,ans=1,k,p,q;
void solve(){
    for(int i=1;i<=n;i++){
        p=k*3%r;
        q=(k*2+ans)%r;
        ans=p;
        k=q;
    }
    cout<<ans;
}
int main(){
    cin>>n;
    solve();
}