#include<bits/stdc++.h>
using namespace std;
int n,m,b[101],a[101][101],j,k,d=10000000;
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>b[i];
    for(int i=0;i<m;i++){
        cin>>j>>k;
        a[j][k]=a[k][j]=1;
    }
    for(int i=1;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<=n;k++){
                if(a[i][j]&&a[j][k]&&a[i][k])
                    d=min(d,b[i]+b[j]+b[k]);
            }
        }
    }
    cout<<(d<10000000?d:-1);
}
