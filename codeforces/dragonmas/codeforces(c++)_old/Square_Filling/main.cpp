#include<bits/stdc++.h>
using namespace std;
int main(){
    int c,r,k=0,b[50][50]={0},a[50][50]={0},d[6000]={0};
    cin>>r>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r-1;i++){
        for(int j=0;j<c-1;j++){
            if(a[i][j]==1&&a[i][j+1]==1&&a[i+1][j]==1&&a[i+1][j+1]==1){
                b[i][j]=b[i+1][j]=b[i][j+1]=b[i+1][j+1]=1;
                d[k++]=i+1;
                d[k++]=j+1;
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]!=b[i][j])return cout<<-1,0;
        }
    }
    cout<<k/2<<endl;
    for(int i=0;i<k;i+=2)cout<<d[i]<<" "<<d[i+1]<<endl;
}
