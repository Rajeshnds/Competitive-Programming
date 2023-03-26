#include<bits/stdc++.h>
using namespace std;
int t,n,x,a,k,s;
void solve(){
    s=0;k=0;
    for(int i=0;i<n;i++){
        cin>>a;
        s+=a-x;
        if(a==x)k++;
    }
    if(k==n)cout<<0;
    else if(s==0||k)cout<<1;
    else cout<<2;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>x;
        solve();
    }
}