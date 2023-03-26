#include<bits/stdc++.h>
using namespace std;
int n;
char c[101][101];
string cross(int n){
    for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)cin>>c[i][j];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(c[i][j]=='#'){
                if(c[i+1][j]=='#'&&c[i+1][j-1]=='#'&&c[i+1][j+1]=='#'&&c[i+2][j]=='#')
                    c[i][j]='.',c[i+1][j]='.',c[i+1][j-1]='.',c[i+1][j+1]='.',c[i+2][j]='.';
                else return "NO";
            }
        }
    }
    for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)if(c[i][j]=='#')return "NO";
    return "YES";
}
int main(){
    cin>>n;cout<<cross(n);
}
