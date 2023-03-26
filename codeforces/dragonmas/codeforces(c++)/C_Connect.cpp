#include<bits/stdc++.h>
using namespace std;
int n,a,b,x,y,d[3][52][52],m=INT_MAX;
char c[52][52];
void dfs(int i,int a,int b){
    if(d[i][a][b])return;
    d[i][a][b]=1;
    if(c[a+1][b]=='0')dfs(i,a+1,b);
    if(c[a-1][b]=='0')dfs(i,a-1,b);
    if(c[a][b+1]=='0')dfs(i,a,b+1);
    if(c[a][b-1]=='0')dfs(i,a,b-1);
}
void solve(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(d[1][i][j]){
                for(int k=1;k<=n;k++){
                    for(int l=1;l<=n;l++){
                        if(d[2][k][l]){
                            m=min(m,(i-k)*(i-k)+(j-l)*(j-l));
                        }
                    }
                }
            }
        }
    }
    cout<<m;
}
int main(){
    cin>>n>>a>>b>>x>>y;
    for(int i=1;i<=n;i++)scanf("%s",c[i]+1);
    dfs(1,a,b);
    dfs(2,x,y);
    solve();
}