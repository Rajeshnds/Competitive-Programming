#include<bits/stdc++.h>
using namespace std;
int n,x,a[5001];
void solve(){
    int ans=0,j=n+1;
    while(a[j/2]!=x){
        a[j++]=x;
        sort(a+1,a+j);
        ans++;
    }
    cout<<ans;
}
int main(){
    cin>>n>>x;
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    solve();
}