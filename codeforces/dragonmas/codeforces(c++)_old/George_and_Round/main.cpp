#include<bits/stdc++.h>
using namespace std;
int n,m,a[3001],b[3001];
set<int>s;
void read(){
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
}
void solve(){
    int j=0,i=0;
    for(i=0;i<n;i++){
        while(b[j]<a[i] && j<m)j++;
        if(j>=m)break;
        j++;
    }
    cout<<n-i;
}
int main(){
    read();
    solve();
}
