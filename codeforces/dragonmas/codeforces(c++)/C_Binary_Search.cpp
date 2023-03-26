#include<bits/stdc++.h>
using namespace std;
long long n,x,pos,mod=1e9+7,ans=1;
void solve(){
    int l=0,r=n,a=x-1,b=n-x;
    while(l<r){
        int d=(l+r)/2;
        if(d<pos)l=d+1,ans=(ans*a%mod),a--;
        else if(d==pos)l=d+1;
        else r=d,ans=(ans*b%mod),b--;
    }
    for(int i=1;i<=a+b;i++)ans=ans*i%mod;
    cout<<ans;
}
int main(){
    cin>>n>>x>>pos;
    solve();
}