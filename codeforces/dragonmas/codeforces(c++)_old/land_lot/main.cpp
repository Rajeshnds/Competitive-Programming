#include<bits/stdc++.h>
using namespace std;
int n,m,t[51][51],s=2501;
void min_chop(int a,int b){
    for(int i=1;i<=n-a+1;i++){
        for(int j=1;j<=m-b+1;j++){
            int d=0;
            for(int k=i;k<i+a;k++){
                for(int l=j;l<j+b;l++){
                    d+=t[k][l];
                }
            }
            s=min(s,d);
        }
    }
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>t[i][j];
    int a,b;
    cin>>a>>b;
    min_chop(a,b);
    min_chop(b,a);
    cout<<s;
}
