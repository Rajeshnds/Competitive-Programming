#include<bits/stdc++.h>
using namespace std;
int h,w,q,r1,c1,r2,c2,a[501][501],b[501][501];
char c[505][505];
void solve(){
    int ans=0;
    for(int i=r1;i<=r2;i++){
        ans+=a[i][c2]-a[i][c1];
    }
    for(int i=c1;i<=c2;i++){
        ans+=b[r2][i]-b[r1][i];
    }
    cout<<ans<<endl;
}
int main(){
    cin>>h>>w;
    for(int i=1;i<=h;i++){
        cin>>c[i]+1;
    }
    for(int i=1;i<=h;i++){
        for(int j=2;j<=w;j++){
            if(c[i][j-1]=='.'&&c[i][j]=='.')
            a[i][j]=a[i][j-1]+1;
            else a[i][j]=a[i][j-1];
        }
    }
    for(int i=1;i<=w;i++){
        for(int j=2;j<=h;j++){
            if(c[j-1][i]=='.'&&c[j][i]=='.')
            b[j][i]=b[j-1][i]+1;
            else b[j][i]=b[j-1][i];
        }
    }
    cin>>q;
    for(int i=1;i<=q;i++){
        cin>>r1>>c1>>r2>>c2;
        solve();
    }
}