#include<bits/stdc++.h>
using namespace std;
int t,n,m,a[101][101];
int main(){
    for(cin>>t;t--;){
        long long s=0;
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>a[i][j];
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                int b[]={a[i][j],a[n-i+1][j],
                        a[i][m-j+1],a[n-i+1][m-j+1]};
                sort(b,b+4);
                s+=abs(b[1]-a[i][j]);
            }
        }
        cout<<s<<endl;
    }
}
