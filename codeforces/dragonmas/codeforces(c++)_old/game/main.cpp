#include<bits/stdc++.h>
using namespace std;
long long n;
void read(){
    cin>>n;
}
void solve(){
    cout<<(n&1?1:2);
}
int main(){
    read();
    solve();
}
