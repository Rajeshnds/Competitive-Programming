#include<bits/stdc++.h>
using namespace std;
int n,a[1001];
void read(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
}
void solve(){
    int b[200001]={0};
    for(int i=1;i<=n-1;i++){
        for(int j=i+1;j<=n;j++){
            b[a[i]+a[j]]++;
        }
    }
    cout<<*max_element(b,b+200001);
}
int main(){
    read();
    solve();
}
