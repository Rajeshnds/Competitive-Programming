#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200001];
void solve(){
    for(int i=1;i<n;i++)a[i]+=a[i-1];
    for(int i=0;i<n;i++){
        if(i>=m)a[i]+=a[i-m];
        cout<<a[i]<<" ";
    }
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    solve();
}