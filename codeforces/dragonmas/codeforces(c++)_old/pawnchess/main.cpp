#include<bits/stdc++.h>
using namespace std;
char c[9][9];
int main(){
    int n=10,m=10,f,g;
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            cin>>c[i][j];
        }
    }
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            f=1;g=1;
            if(c[i][j]=='B'){
                for(int k=i+1;k<=8;k++){
                    if(c[k][j]!='.')f=0;
                }
                if(f)m=min(m,8-i);
            }
            else if(c[i][j]=='W'){
                for(int k=i-1;k>=1;k--){
                    if(c[k][j]!='.')g=0;
                }
                if(g)n=min(n,i-1);
            }
        }
    }
    cout<<(n<=m?'A':'B');
}
