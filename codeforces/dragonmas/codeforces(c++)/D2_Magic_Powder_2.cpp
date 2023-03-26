#include<bits/stdc++.h>
using namespace std;
long long l=1,r=2e9+1,m,j,n,k,a[100001],b[100001];
void solve(){
    while(l<r){
        m=(l+r)/2;
        j=0;
        for(int i=1;i<=n;i++){
            j+=max(a[i]*m-b[i],0ll);
            if(j>k){
                r=m;
                break;
            }
            if(i==n)l=m+1;
        }
    }
    cout<<l-1;
}
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    solve();
}