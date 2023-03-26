#include<bits/stdc++.h>
using namespace std;
int n,m,k,p=998244353;
long long a[2001][2001];
void solve(){
    for(int i=1;i<=n;i++){
        a[i][0]=m;
        for(int j=1;j<i;j++){
            a[i][j]=(a[i-1][j]+(m-1)*a[i-1][j-1])%p;
        }
    }
    cout<<a[n][k];
}
int main(){
    cin>>n>>m>>k;
    solve();
}