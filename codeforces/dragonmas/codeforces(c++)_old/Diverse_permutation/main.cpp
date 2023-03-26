#include<bits/stdc++.h>
using namespace std;
int n,k;
void read(){
    cin>>n>>k;
}
void solve(){
    for(int i=1;i<=k+1;i++){
        cout<<(i%2==0?k+2-i/2:i/2+1)<<" ";
    }
    for(int i=k+2;i<=n;i++)cout<<i<<" ";
}
int main(){
    read();
    solve();
}
