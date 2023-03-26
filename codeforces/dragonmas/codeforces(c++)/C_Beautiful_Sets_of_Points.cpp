#include<bits/stdc++.h>
using namespace std;
int n,m;
void solve(){
    n=min(n,m);
    cout<<n+1<<endl;
    for(int i=0;i<=n;i++)cout<<i<<" "<<n-i<<endl;
}
int main(){
    cin>>n>>m;
    solve();
}