#include<bits/stdc++.h>
using namespace std;
int t,n,m,k;
char c[55][55];
vector<vector<int>>v(55,vector<int>(55));
void assign_zero(){
    for(int i=1;i<55;i++)for(int j=1;j<55;j++)v[i][j]=0;
}
void dfs(int i,int j){
    if(v[i][j])return;
    v[i][j]=1;
    if(j+1<=m&&(c[i][j+1]=='.'||c[i][j+1]=='G'))dfs(i,j+1);
    if(c[i][j-1]=='.'||c[i][j-1]=='G')dfs(i,j-1);
    if(i+1<=n&&(c[i+1][j]=='.'||c[i+1][j]=='G'))dfs(i+1,j);
    if(c[i-1][j]=='.'||c[i-1][j]=='G')dfs(i-1,j);
}
void solve(){
    int f=1;
    if(c[n][m]=='#')f=0;
    if(f){
        assign_zero();
        // v.clear();
        dfs(n,m);
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(c[i][j]=='G'&&(!v[i][j]||!f)){cout<<"No";return;}
        }
    }
    cout<<"Yes";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(cin>>t;t--;cout<<endl){
        cin>>n>>m;
        int f=1;
        for(int i=1;i<=n;i++)cin>>c[i]+1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(c[i][j]=='B'){
                    if((j+1<=m&&c[i][j+1]=='G')||c[i][j-1]=='G'||
                    c[i-1][j]=='G'||(i+1<=n&&c[i+1][j]=='G'))f=0;
                    if(c[i][j+1]!='B')c[i][j+1]='#';
                    if(c[i][j-1]!='B')c[i][j-1]='#';
                    if(c[i-1][j]!='B')c[i-1][j]='#';
                    if(c[i+1][j]!='B')c[i+1][j]='#';
                }
            }
        }
        if(f==0)cout<<"No";
        else{
            solve();
        }
    }
}