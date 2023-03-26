#include<bits/stdc++.h>
using namespace std;
int k,a,b;
void read(){
    cin>>k>>a>>b;
}
void solve(){
    cout<<((a>=k&&b>=k)||((a%k==0&&a>0)||(b%k==0&&b>0))?a/k+b/k:-1);
}
int main(){
    read();
    solve();
}
