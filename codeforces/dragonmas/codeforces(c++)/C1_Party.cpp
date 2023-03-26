#include<bits/stdc++.h>
using namespace std;
const int N=2001;
int n,k,m,a[N],b[N],c[N],l;
vector<int>v[N];
void dfs(int i){
    a[i]=l;
    b[l]++;
    for(auto j:v[i])if(a[j]==0)dfs(j);
}
void solve(){
    int x,y;
    for(int i=1;i<=n;i++){
        if(a[i]==0)l++,dfs(i);
    }
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        if(a[x]==a[y])c[a[x]]=1;
    }
    int ans=0;
    for(int i=1;i<=l;i++)if(!c[i])ans=max(ans,b[i]);
    cout<<ans;
}
int main(){
    int x,y;
    cin>>n>>k;
    for(int i=1;i<=k;i++){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    solve();
}