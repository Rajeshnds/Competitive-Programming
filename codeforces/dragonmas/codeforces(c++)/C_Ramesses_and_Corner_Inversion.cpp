#include<bits/stdc++.h>
using namespace std;
int a[501][501],c[501],d[501],b,n,m;
void solve(){
    int f=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>b;
            if(a[i][j]!=b)c[i]++,d[j]++;
        }
    }
    for(int i=0;i<n;i++)if(c[i]%2)f=0;
    for(int i=0;i<m;i++)if(d[i]%2)f=0;
    cout<<(f?"Yes":"No");
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    solve();
}