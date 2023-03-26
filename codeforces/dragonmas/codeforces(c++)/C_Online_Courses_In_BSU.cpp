#include<bits/stdc++.h>
using namespace std;
int n,k,a[100001],b[100001],c[100001];
vector<int>v[100001],v2;
void f(int i){
    if(c[i]==0){
        c[i]=1;
        for(auto j:v[i])f(j);
        c[i]=2;
        v2.push_back(i);
    }
    else if(c[i]==1){
        cout<<-1;
        exit(0);
    }
}
void solve(){
    for(int i=1;i<=k;i++){
        f(a[i]);
    }
    cout<<v2.size()<<endl;
    for(auto i:v2)cout<<i<<" ";
}
int main(){
    int x;
    cin>>n>>k;
    for(int i=1;i<=k;i++)cin>>a[i];
    for(int i=1;i<=n;i++){
        cin>>b[i];
        for(int j=1;j<=b[i];j++)cin>>x,v[i].push_back(x);
    }
    solve();
}