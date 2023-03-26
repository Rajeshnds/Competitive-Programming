#include<bits/stdc++.h>
using namespace std;
void good_grid(int n,int m){
    int f=1,a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if((i==0||i==n-1)&&(j==0||j==m-1)){
                if(a[i][j]<=2)a[i][j]=2;
                else f=0;
            }
            else if(i==0||i==n-1||j==0||j==m-1){
                if(a[i][j]<=3)a[i][j]=3;
                else f=0;
            }
            else{
                if(a[i][j]<=4)a[i][j]=4;
                else f=0;
            }
        }
    }
    if(f){
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else cout<<"NO"<<endl;
}
int main(){
    int t,n,m;
    for(cin>>t;t--;){
        cin>>n>>m;
        good_grid(n,m);
    }
}
