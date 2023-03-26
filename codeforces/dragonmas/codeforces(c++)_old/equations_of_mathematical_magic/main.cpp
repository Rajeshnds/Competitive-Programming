#include<bits/stdc++.h>
using namespace std;
int n,a;
void read(){
    cin>>a;
}
void solve(){
    int k=__builtin_popcount(a);
    cout<<(1<<k)<<endl;
}
int main(){
    cin>>n;
    while(n--){
        read();
        solve();
    }
}
