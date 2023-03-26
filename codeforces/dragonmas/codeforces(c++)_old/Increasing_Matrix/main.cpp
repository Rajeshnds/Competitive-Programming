#include<bits/stdc++.h>
using namespace std;
int n,m,s,a[502][502];
int matrix_maxsum(int n,int m){
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)cin>>a[i][j];
    for(int i=n;i>0;i--){
        for(int j=m;j>0;j--){
            if(a[i][j]==0)a[i][j]=min(a[i][j+1]-1,a[i+1][j]-1);
            if(a[i][j]<=a[i][j-1]||a[i][j]<=a[i-1][j])return -1;
            s+=a[i][j];
        }
    }
    return s;
}
int main(){
    cin>>n>>m;
    cout<<matrix_maxsum(n,m);
}
