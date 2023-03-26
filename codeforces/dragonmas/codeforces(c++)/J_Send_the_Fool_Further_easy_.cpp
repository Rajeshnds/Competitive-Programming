#include<bits/stdc++.h>
using namespace std;
int m,n,a[101][101];
void f(int b,int c,int d){
    m=max(m,d);
    for(int i=0;i<n;i++){
        if(i!=b&&a[c][i]){
            f(c,i,d+a[c][i]);
        }
    }
}
void solve(){ 
    f(-1,0,0);
    cout<<m;
}
int main(){
    int x,y,z;
    cin>>n;
    for(int i=1;i<n;i++){
        cin>>x>>y>>z;
        a[x][y]=z;
        a[y][x]=z;
    }
    solve();
}