#include<bits/stdc++.h>
using namespace std;
int q,n,m;
int main(){
    for(cin>>q;q--;){
        cin>>n>>m;
        char c[n][m];
        int a[50001]={0},b[50001]={0},k=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>c[i][j];
                if(c[i][j]=='.')a[i]++,b[j]++;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                k=min(k,a[i]+b[j]-(c[i][j]=='.'));
            }
        }
        cout<<k<<endl;
    }
}
