#include<bits/stdc++.h>
using namespace std;
int n,a[501][501];
void solve(){
    int x,y,z;
    for(int i=1;i<=n;i++){
        x=i;
        y=i;
        cin>>z;
        for(int j=1;j<=z;j++){
            a[x][y]=z;
            if(y>1&&a[x][y-1]==0)y--;
            else x++;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    cin>>n;
    solve();
}