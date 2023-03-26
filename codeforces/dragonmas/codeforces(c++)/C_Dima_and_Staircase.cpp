#include<bits/stdc++.h>
using namespace std;
long long n,a[100001],m;
void solve(){
    long long w,h,d=0,e=0;
    for(int i=1;i<=m;i++){
        cin>>w>>h;
        d=max(e,a[w]);
        cout<<d<<endl;
        e=d+h;
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    cin>>m;
    solve();
}