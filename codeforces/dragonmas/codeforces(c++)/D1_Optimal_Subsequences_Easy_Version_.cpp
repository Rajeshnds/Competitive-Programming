#include<bits/stdc++.h>
using namespace std;
pair<int,int>p[101];
int n,m,a[101],d,k,b[101];
void solve(){
    for(int i=0;i<k;i++){
        b[i]=p[i].second;
    }
    sort(b,b+k);
    cout<<a[b[d-1]]<<endl;
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i],p[i]={-a[i],i};
    cin>>m;
    sort(p,p+n);
    for(int i=1;i<=m;i++){
        cin>>k>>d;
        solve();
    }
}