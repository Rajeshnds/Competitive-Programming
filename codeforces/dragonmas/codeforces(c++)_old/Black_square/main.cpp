#include<bits/stdc++.h>
using namespace std;
int n,m,k,a,b,d;
int black(){
    cin>>n>>m>>k;
    int c[1001][1001];
    for(int i=1;i<=k;i++)cin>>a>>b,c[a][b]=i;
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(c[i][j]&&c[i][j+1]&&c[i+1][j]&&c[i+1][j+1])d=1;
               // return max(max(max(c[i][j],c[i][j+1]),c[i+1][j]),c[i+1][j+1]);
        }
    }
    if(d)return 1;
    return 2;
}
int main(){
    cout<<black();
}
