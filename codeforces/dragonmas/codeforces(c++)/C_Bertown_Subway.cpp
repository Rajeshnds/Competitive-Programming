#include<bits/stdc++.h>
using namespace std;
int n,a[100001],b[100001];
long long ans,c[100001];
int f(int i){
    return i==a[i]?i:a[i]=f(a[i]);
}
void solve(){
    for(int i=1;i<=n;i++){
        cin>>b[i];
        a[f(i)]=f(b[i]);
    }
    for(int i=1;i<=n;i++)c[f(i)]++;
    sort(c+1,c+n+1);
    ans=(c[n]+c[n-1])*(c[n]+c[n-1]);
    for(int i=1;i<=n-2;i++)ans+=c[i]*c[i];
    cout<<ans;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)a[i]=i;
    solve();
}