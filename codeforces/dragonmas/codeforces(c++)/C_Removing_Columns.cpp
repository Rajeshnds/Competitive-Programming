#include<bits/stdc++.h>
using namespace std;
int n,m,b[101][101];
char c[101][101];
void solve(){
    int k=0;
    for(int i=1;i<=m;i++){
        for(int j=2;j<=n;j++){
            if(c[j][i]>c[j-1][i])b[j][i]=1;
            else if(b[j][i-1]){b[j][i]=1;continue;}
            else if(c[j][i]<c[j-1][i]){
                k++;
                for(int l=1;l<=n;l++)b[l][i]=b[l][i-1];
                break;
            }
        }
    }
    cout<<k;
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>c[i]+1;
    solve();
}