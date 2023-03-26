#include<bits/stdc++.h>
using namespace std;
int t,n,m;
char c[15][15];
void solve(){
    int f,ans;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            char d=c[i][j];
            for(char ch='a';ch<='z';ch++){
                c[i][j]=ch;
                f=1;
                for(int k=1;k<=n;k++){
                    ans=0;
                    for(int l=1;l<=m;l++){
                        if(c[k][l]!=c[i][l])ans++;
                    }
                    if(ans>1)f=0;
                }
                if(f){
                    for(int j=1;j<=m;j++)cout<<c[i][j];
                    return;
                }
                else{
                    c[i][j]=d;
                }
            }
        }
    }
    cout<<-1;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>m;
        for(int i=1;i<=n;i++)cin>>c[i]+1;
        solve();
    }
}