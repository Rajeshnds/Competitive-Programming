#include<bits/stdc++.h>
using namespace std;
int n,m,x[]={-1,0,1,-1,1,-1,0,1},y[]={-1,-1,-1,0,0,1,1,1};
char c[1002][1002],d[1002][1002];
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>c[i][j];
            d[i][j]='.';
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            bool ok=true;
            for(int k=0;k<8;k++){
                if(c[i+x[k]][j+y[k]]!='#')ok=false;
            }
            if(ok){
                for(int k=0;k<8;k++){
                    d[i+x[k]][j+y[k]]='#';
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(c[i][j]!=d[i][j])return cout<<"NO",0;
        }
    }
    cout<<"YES";
}