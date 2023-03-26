#include<bits/stdc++.h>
using namespace std;
int n,l,a[101],s,k;
void solve(){
    for(int i=l;i<=100;i++){
        k=0;
        for(int j=1;j<=n;j++){
            k+=(a[j]/i);
        }
        s=max(s,k*i);
    }
    cout<<s;
}
int main(){
    cin>>n>>l;
    for(int i=1;i<=n;i++)cin>>a[i];
    solve();
}