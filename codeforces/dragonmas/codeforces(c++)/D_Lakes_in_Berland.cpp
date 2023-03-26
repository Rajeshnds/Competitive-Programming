#include<bits/stdc++.h>
using namespace std;
int n,m,k,l,r;
char c[51][51];
set<pair<int,int>>s[5001],s1;
pair<int,int>p[5001];
void dfs(int i,int j){
    if(c[i][j]=='.'&&!s1.count({i,j})){
        if(i==1||i==n||j==1||j==m){r=0;return;}
        s1.insert({i,j});
        s[l].insert({i,j});
        dfs(i+1,j);
        dfs(i-1,j);
        dfs(i,j+1);
        dfs(i,j-1);
    }
}
void solve(){
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(c[i][j]=='.'&&!s1.count({i,j})){
                l++;
                r=1;
                dfs(i,j);
                if(r==0){
                    s[l].clear();
                    l--;
                }
                else if(r){
                    p[l]={s[l].size(),l};
                }
            }
        }
    }
    sort(p+1,p+l+1);
    for(int i=1;i<=l-k;i++){
        for(auto j:s[p[i].second]){
            ans++;
            c[j.first][j.second]='*';
        }
    }
    cout<<ans<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<c[i][j];
        }
        cout<<endl;
    }
}
int main(){
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        cin>>c[i]+1;
    }
    solve();
}