#include<bits/stdc++.h>
using namespace std;
long long n,k,ans=1,m=1e9+7,b[200001],l,r;
vector<int>v[200001];
void f(int i,int p){
    b[i]=1;
    l++;
    for(auto j:v[i]){
        if(j!=p)f(j,i);
    }
}
void solve(){
    for(int i=1;i<=n;i++){
        l=0;
        if(b[i])continue;
        f(i,0);
        int r=1;
        for(int j=1;j<=k;j++)r=r*l%m;
        ans=(ans+m-r)%m;
    }
    cout<<ans;
}
int main(){
    int a,b,c;
    cin>>n>>k;
    for(int i=1;i<n;i++){
        cin>>a>>b>>c;
        if(c)continue;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=1;i<=k;i++)ans=ans*n%m;
    solve();
}