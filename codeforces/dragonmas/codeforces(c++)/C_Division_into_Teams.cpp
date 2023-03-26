#include<bits/stdc++.h>
using namespace std;
int n,a[100001],p1[100001],p2[100001];
pair<int,int>p[100001];
void solve(){
    cout<<(n+1)/2<<endl;
    for(int i=1;i<=n;i+=2)cout<<p[i].second<<" ";cout<<endl;
    cout<<n/2<<endl;
    for(int i=2;i<=n;i+=2)cout<<p[i].second<<" ";
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>p[i].first;
        p[i].second=i;
    }
    sort(p+1,p+n+1);
    solve();
}