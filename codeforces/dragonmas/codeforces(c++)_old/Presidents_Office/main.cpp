#include<bits/stdc++.h>
using namespace std;
int n,m,k,a[91];
char c,s[105][105];
int no_of_deputies(){
    cin>>n>>m>>c;
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)cin>>s[i][j];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i][j]==c){
               a[s[i][j-1]]=a[s[i][j+1]]=a[s[i+1][j]]=a[s[i-1][j]]=1;
            }
        }
    }
    for(int i='A';i<='Z';i++)k+=a[i];
    return k-a[c];
}
int main(){
    cout<<no_of_deputies();
}
