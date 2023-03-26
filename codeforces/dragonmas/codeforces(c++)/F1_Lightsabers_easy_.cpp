#include<bits/stdc++.h>
using namespace std;
int n,m,a[101],b[101],c[101],k;
void solve(){
    int f;
    for(int i=1;i<k;i++)c[a[i]]++;
    for(int i=k;i<=n;i++){
        c[a[i]]++;
        f=1;
        for(int j=i-k+1;j<=i;j++){
            if(c[a[j]]!=b[a[j]])f=0;
        }
        if(f){cout<<"YES";return;}
        c[a[i-k+1]]--;
    }
    cout<<"NO";
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=m;i++)cin>>b[i],k+=b[i];
    solve();
}