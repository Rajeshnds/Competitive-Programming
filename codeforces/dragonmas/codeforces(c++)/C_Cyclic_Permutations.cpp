#include<bits/stdc++.h>
using namespace std;
long long i,k=1,n,p=1e9+7,ans=1;
void solve(){
    for(i=2;i<=n;i++){
        ans=((ans*i)%p);
        k=(k*2)%p;
    }
    cout<<(ans+p-k)%p;
}
int main(){
    cin>>n;
    solve();
}