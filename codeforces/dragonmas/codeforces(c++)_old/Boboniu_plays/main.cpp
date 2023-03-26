#include<bits/stdc++.h>
using namespace std;
int n,m,x,y;
void chess(int n,int m){
    cin>>x>>y;
    for(int i=1;i<=n;i++,x=x<n?x+1:1){
        for(int j=1;j<=m;j++,y=j<=m?y<m?y+1:1:y){
            cout<<x<<" "<<y<<endl;
        }
    }
}
int main(){
    cin>>n>>m;chess(n,m);
}
