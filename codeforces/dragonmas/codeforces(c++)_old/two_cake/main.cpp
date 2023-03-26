#include<bits/stdc++.h>
using namespace std;
int n,a[100001],b[100001];
void read(){
    int c;
    cin>>n;
    for(int i=1;i<=2*n;i++){
        cin>>c;
        if(a[c]==0)a[c]=i;
        else b[c]=i;
    }
}
void solve(){
    long long k=0;
    k=k+a[1]-1+b[1]-1;
    for(int i=2;i<=n;i++){
        k=k+abs(a[i]-a[i-1])+abs(b[i]-b[i-1]);
    }
    cout<<k;
}
int main(){
    read();
    solve();
}
