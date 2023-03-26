#include<bits/stdc++.h>
using namespace std;
int n,k,a[100001],c=INT_MAX,d=-(INT_MAX);
void read(){
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i],c=min(c,a[i]),d=max(d,a[i]);
}
void solve(){
    if(k==1)cout<<c;
    else if(k==2)cout<<max(a[0],a[n-1]);
    else cout<<d;
}
int main(){
    read();
    solve();
}
