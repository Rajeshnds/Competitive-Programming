#include<bits/stdc++.h>
using namespace std;
int n,m,h,a[102],b[102],c[102][102];
void read(){
    cin>>n>>m>>h;
    for(int i=1;i<=m;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)cin>>c[i][j];
}
void solve(){
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(c[i][j]==1)c[i][j]=min(a[j],b[i]);
    for(int i=1;i<=n;i++,cout<<endl)
        for(int j=1;j<=m;j++)
            cout<<c[i][j]<<" ";
}
int main(){
    read();
    solve();
}
