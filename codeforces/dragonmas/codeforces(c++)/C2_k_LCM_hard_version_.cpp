#include<bits/stdc++.h>
using namespace std;
int t,n,k;
void solve(){
    for(int i=1;i<=k-3;i++)cout<<1<<" ";
    int d=n-k+3;
    if(d%2)cout<<1<<" "<<d/2<<" "<<d/2;
    else{
        if((d-2)/2%2==0)cout<<2<<" "<<d/2-1<<" "<<d/2-1;
        else cout<<d/2<<" "<<d/4<<" "<<d/4;
    }
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>k;
        solve();
    }
}