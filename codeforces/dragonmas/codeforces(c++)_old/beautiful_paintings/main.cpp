#include<bits/stdc++.h>
using namespace std;
int n,a[1001],m;
void read(){
    int b;
    cin>>n;
    for(int i=0;i<n;i++)cin>>b,a[b]++,m=max(m,a[b]);
}
void solve(){
    cout<<n-m;
}
int main(){
    read();
    solve();
}
