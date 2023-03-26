#include<bits/stdc++.h>
using namespace std;
int n,d,a[200001],b[200001];
void solve(){
    a[d]+=b[1];
    int j=n-d+2,k=d;
    for(int i=d-1;j<=n;){
        if(a[i]+b[j]<=a[d])k=i,i--;
        j++;
    }
    cout<<k;
}
int main(){
    cin>>n>>d;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    solve();
}