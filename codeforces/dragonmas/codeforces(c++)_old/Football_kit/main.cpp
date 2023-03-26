#include<bits/stdc++.h>
using namespace std;
int n,y[200001],a[100001];
void read(){
    int m;
    cin>>n;
    for(int i=0;i<n;i++)cin>>m>>y[i],a[m]++;
}
void solve(){
    for(int i=0;i<n;i++){
        int k=a[y[i]];
        cout<<n-1+k<<" "<<n-1-k<<endl;
    }
}
int main(){
    read();
    solve();
}
