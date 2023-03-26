#include<bits/stdc++.h>
using namespace std;
int t,n,a[200001];
pair<int,int>p[200001];
void f(int l,int r){
    if(l>r)return;
    int m=(l+r)/2;
    p[m]={l-r,m};
    f(l,m-1);
    f(m+1,r);
}
void solve(){
    f(1,n);
    sort(p+1,p+n+1);
    for(int i=1;i<=n;i++)a[p[i].second]=i;
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        solve();
    }
}