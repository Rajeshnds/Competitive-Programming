#include<bits/stdc++.h>
using namespace std;
int x,y,a,b;
void read(){
    cin>>x>>y>>a>>b;
}
void solve(){
    int k=(x*y)/(__gcd(x,y));
    cout<<b/k-(a-1)/k;
}
int main(){
    read();
    solve();
}
