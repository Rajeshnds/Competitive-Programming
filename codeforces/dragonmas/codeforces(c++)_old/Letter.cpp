#include<bits/stdc++.h>
using namespace std;
char c[52][52];
int n,m,x=INT_MAX,xx,y=INT_MAX,yy;
main(){
    cin>>n>>m;
for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++){
        cin>>c[i][j];
        if(c[i][j]=='*')
            x=min(x,i),xx=max(xx,i),y=min(y,j),yy=max(yy,j);
        }
for(int i=x;i<=xx;i++,cout<<endl)
    for(int j=y;j<=yy;j++)
    cout<<c[i][j];
}
