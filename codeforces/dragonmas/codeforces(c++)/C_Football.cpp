#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int n,k;
void solve(){
    int d=n-k+1;
    if(2*k>=n){cout<<-1;return;}
    cout<<n*k<<endl;
    for(int i=1;i<=n;i++){
        for(int j=i;j<i+k;j++){
            cout<<i<<" "<<j%n+1<<endl;
        }
    }
}
int main(){
    cin>>n>>k;
    solve();
}