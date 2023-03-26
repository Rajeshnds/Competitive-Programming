#include<bits/stdc++.h>
using namespace std;
long long l,r,x,y,k;
void read(){
    cin>>l>>r>>x>>y>>k;
}
void solve(){
    cout<<(x*k<=r&&y*k>=l&&r>=((l+k-1)/k)*k?"YES":"NO");
}
int main(){
    read();
    solve();
}
