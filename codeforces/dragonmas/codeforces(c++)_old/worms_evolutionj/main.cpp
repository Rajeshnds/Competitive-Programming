#include<bits/stdc++.h>
using namespace std;
int n,a[101],b[2001];
void read(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i],b[a[i]]=i;
}
void solve(){
    for(int i=1;i<=n-1;i++){
        for(int j=i+1;j<=n;j++){
            if(b[a[i]+a[j]]){
                cout<<b[a[i]+a[j]]<<" "<<i<<" "<<j;
                exit(0);
            }
        }
    }
    cout<<-1;
}
int main(){
    read();
    solve();
}
