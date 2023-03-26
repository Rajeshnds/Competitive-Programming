#include<bits/stdc++.h>
using namespace std;
# define ll long long
int t,n,m,k,d[1001][1001],ans,e[100001];
char c[1001][1001];
void dfs(int a,int b,int i){
    if(d[a][b])return;
    d[a][b]=i;
    if(b+1<=m){
        if(c[a][b+1]=='*')ans++;
        else dfs(a,b+1,i);
    }
    if(b-1>=1){
        if(c[a][b-1]=='*')ans++;
        else dfs(a,b-1,i);
    }
    if(a+1<=n){
        if(c[a+1][b]=='*')ans++;
        else dfs(a+1,b,i);
    }
    if(a-1>=1){
        if(c[a-1][b]=='*')ans++;
        else dfs(a-1,b,i);
    }
}
void solve(){
    int a,b;
    for(int i=1;i<=k;i++){
        cin>>a>>b;
        if(d[a][b]){cout<<e[d[a][b]]<<endl;continue;}
        ans=0;
        dfs(a,b,i);
        e[i]=ans;
        cout<<ans<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)cin>>c[i]+1;
    solve();   
}