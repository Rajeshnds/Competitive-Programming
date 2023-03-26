#include<bits/stdc++.h>
using namespace std;
int n,m,d[1001];
char c[1001][1001];
int main(){
    int a,b,k=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)cin>>c[i][j];
    for(int i=1;i<=n;i++){
        a=0;b=0;
        for(int j=1;j<=m;j++){
            if(c[i][j]=='G')a=j;
            if(c[i][j]=='S')b=j;
            if(b&&!a)return cout<<-1,0;
        }
        d[b-a]=1;
    }
    for(int i=1;i<=m;i++)k+=d[i];
    cout<<k;
}
