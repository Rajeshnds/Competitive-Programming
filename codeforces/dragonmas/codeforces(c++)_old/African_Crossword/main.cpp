#include<bits/stdc++.h>
using namespace std;
int n,m,a[101][123],b[101][123];
char c[101][101];
void encrypted_word(){
    cin>>n>>m;
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>c[i][j];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)a[i][c[i][j]]++,b[j][c[i][j]]++;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(a[i][c[i][j]]+b[j][c[i][j]]==2)cout<<c[i][j];
}
int main(){
    encrypted_word();
}
