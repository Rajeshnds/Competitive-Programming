#include<bits/stdc++.h>
using namespace std;
int n,k;
void read(){
    cin>>n>>k;
}
void solve(){
    cout<<(n==k||k==0?0:1)<<" "<<min(k*2,n-k);
}
int main(){
    read();
    solve();
}
