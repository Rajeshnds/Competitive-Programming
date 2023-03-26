#include<bits/stdc++.h>
using namespace std;
int n,m,b[104][104];
char c[103][103];
string no_of_bombs(){
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>c[i]+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(c[i][j]=='*'){
                b[i][j+1]++;
                b[i][j-1]++;
                b[i+1][j]++;
                b[i-1][j]++;
                b[i-1][j-1]++;
                b[i-1][j+1]++;
                b[i+1][j-1]++;
                b[i+1][j+1]++;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(b[i][j]==0)b[i][j]=-2;
            if(c[i][j]!='*'){
                if(c[i][j]-48!=b[i][j])return "NO";
            }
        }
    }
    return "YES";
}
int main(){
    cout<<no_of_bombs();
}
