#include<bits/stdc++.h>
using namespace std;
int n,a[3001],b[3001],c[3001],m;
void solve(){
    for(int i=1;i<n;i++){
        m=1e9;
        for(int j=0;j<i;j++){
            if(a[j]<a[i])m=min(m,b[j]+b[i]);
        }
        c[i]=m;
    }
    m=1e9;
    for(int i=2;i<n;i++){
        for(int j=1;j<i;j++){
            if(a[j]<a[i])m=min(m,c[j]+b[i]);
        }
    }
    cout<<(m<1e9?m:-1);
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    solve();
}