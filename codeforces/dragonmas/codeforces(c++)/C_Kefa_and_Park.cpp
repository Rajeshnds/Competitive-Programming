#include<bits/stdc++.h>
using namespace std;
int n,m,a[100001],b[100001],ans,k;
vector<int>v[100001];
void f(int d){
    b[d]=1;
    int r=1;
    if(a[d])a[d]+=k;
    if(a[d]>m)return;
    for(int i=0;i<v[d].size();i++){
        if(b[v[d][i]]==0){
            r=0;
            k=a[d];
            f(v[d][i]);
        }
    }
    if(r){ans++;return;}
}
void solve(){
    f(1);
    cout<<ans;
}
int main(){
    int x,y;
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<n;i++){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    solve();
}