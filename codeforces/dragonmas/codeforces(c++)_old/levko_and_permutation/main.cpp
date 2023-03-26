#include<bits/stdc++.h>
using namespace std;
int n,k,a[100001];
void read(){
    cin>>n>>k;
}
void solve(){
    if(n==k)cout<<-1;
    else{
        cout<<n-k<<" ";
        for(int i=1;i<=n;i++){
            if(i!=n-k)cout<<i<<" ";
        }
    }
}
int main(){
    read();
    solve();
}
