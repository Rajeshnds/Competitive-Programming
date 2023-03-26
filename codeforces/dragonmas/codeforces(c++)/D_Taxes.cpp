#include<bits/stdc++.h>
using namespace std;
int n,ans,f;
void solve(){
    int f=0;
    for(int i=2;i*i<=n;i++)if(n%i==0){f=1;break;}
    if(!f)cout<<1;
    else if(n%2==0)cout<<2;
    else{
        f=0;
        n-=2;
        for(int i=2;i*i<=n;i++)if(n%i==0)f=1;
        if(f)cout<<3;
        else cout<<2;
    }
}
int main(){
    cin>>n;
    solve();
}