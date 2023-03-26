#include<bits/stdc++.h>
using namespace std;
int n,m,s,x,y,a[1001];
int solve(){
    while(m--){
        cin>>x>>y;
        s+=min(a[x],a[y]);
    }
    return s;
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    cout<<solve();
}