#include<bits/stdc++.h>
using namespace std;
char c[51][51];
int n;
main(){
cin>>n;
for(int i=1;i<=n;i++)cin>>c[i]+1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(c[i][j]=='.'&&c[i][j+1]=='.'&&c[i][j-1]=='.'&&c[i+1][j]=='.'&&c[i-1][j]=='.')
            c[i][j]=c[i][j+1]=c[i][j-1]=c[i+1][j]=c[i-1][j]='#';
    }
}
for(int i=1;i<=n;i++)
for(int j=1;j<=n;j++)
    if(c[i][j]=='.')return cout<<"NO",0;
cout<<"YES";
}
