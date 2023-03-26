#include<bits/stdc++.h>
using namespace std;
int n,g[101][101],k,m,c[101],t;
void f(int i,int d){
    if(c[i])return;
    c[i]=1;
    if(d>m)m=d;
    for(int j=1;j<=k;j++){
        if(g[i][j]){
            f(j,d+1);
        }
    }
    c[i]=0;
}
void solve(){
    int a,b;
    for(int i=1;i<k;i++){
        cin>>a>>b;
        g[a][b]=1;
        g[b][a]=1;
    }
    for(int i=1;i<=k;i++){
        f(i,0);
    }
    t+=m;
}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        m=0;
        for(int j=0;j<101;j++){
            for(int l=0;l<101;l++){
                g[j][l]=0;
            }
        }
        solve();
    }
    cout<<t;
}