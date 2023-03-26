#include<bits/stdc++.h>
using namespace std;
int n,k;
void solve(){
    int j=1;
    if(k==1||3*k>n){cout<<-1;return;}
    for(int i=1;i<=k;i++)cout<<i<<" ";
    for(int i=1;i<=n-k;i++){
        if(j==k)cout<<j<<" ";
        else cout<<j<<" "<<j<<" ",j++,i++;
    }
}
int main(){
    cin>>n>>k;
    solve();
}