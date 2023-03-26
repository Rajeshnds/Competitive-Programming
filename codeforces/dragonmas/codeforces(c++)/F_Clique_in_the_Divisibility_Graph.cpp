#include<bits/stdc++.h>
using namespace std;
int n,a[1000001];
void solve(){
    int d=1000000,k,m=0;
    for(int i=1;i<=n;i++){
        cin>>k;
        a[k]++;
        for(int j=2*k;j<=d;j+=k)a[j]=max(a[j],a[k]);
        m=max(m,a[k]);
    }
    cout<<m;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    solve();
}