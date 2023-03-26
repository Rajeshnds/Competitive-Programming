#include<bits/stdc++.h>
using namespace std;
int n,a[4001],b[4001][4001];
void solve(){
    int ans=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        int c=0;
        for(int j=0;j<i;j++){
            b[j][i]=1+b[c][j];
            if(a[j]==a[i])c=j;
            ans=max(ans,b[j][i]);
        }
    }
    cout<<ans;
}
int main(){
    cin>>n;
    solve();
}