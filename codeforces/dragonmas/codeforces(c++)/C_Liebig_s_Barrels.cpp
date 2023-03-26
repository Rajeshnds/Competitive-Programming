#include<bits/stdc++.h>
using namespace std;
int n,k,l,j,e,d,f,a[100001];
long long ans;
void solve(){
    for(int i=0;i<n;i++){
        ans+=a[min(i*k,j-n+i)];
    }
    cout<<ans;
}
int main(){
    cin>>n>>k>>l;
    for(int i=0;i<n*k;i++)cin>>a[i];
    sort(a,a+(n*k));
    while(j<n*k&&a[j]-a[0]<=l)j++;
    if(j<n)return cout<<0,0;
    solve();
}