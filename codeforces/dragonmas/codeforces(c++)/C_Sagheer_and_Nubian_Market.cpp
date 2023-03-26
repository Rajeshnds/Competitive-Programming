#include<bits/stdc++.h>
using namespace std;
int n,s,a[100001];
int f(int k){
    int cost=0,b[100001]={0};
    for(int i=1;i<=n;i++)b[i]=a[i]+i*k;
    sort(b+1,b+n+1);
    for(int i=1;i<=k;i++)cost+=b[i];
    return cost;
}
void solve(){
    int k;
    for(k=1;k<=n;k++){
        if(f(k)>s)break;
    }
    cout<<k-1<<" "<<f(k-1);
}
int main(){
    cin>>n>>s;
    for(int i=1;i<=n;i++)cin>>a[i];
    solve();
}