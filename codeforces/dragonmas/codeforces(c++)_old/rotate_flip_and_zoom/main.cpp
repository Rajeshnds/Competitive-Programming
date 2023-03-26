#include<bits/stdc++.h>
using namespace std;
int w,h,k,l;
char d[101][101],e[101][101],f[101][201];
int main(){
    cin>>w>>h;
    for(int i=h;i>=1;i--){
        for(int j=1;j<=w;j++){
            cin>>d[j][i];
        }
    }

    l=0;
    for(int i=h;i>=1;i--){
        k=1;l++;
        for(int j=1;j<=w;j++){
            e[k++][l]=d[j][i];
        }
    }

   for(int i=1;i<=w;i++){
       k=1;
       for(int j=1;j<=h;j++){
           f[i][k++]=e[i][j];
           f[i][k++]=e[i][j];
       }
   }
   for(int i=1;i<=w;i++){
       for(int j=1;j<k;j++){
           cout<<f[i][j];
       }
       cout<<endl;
       for(int j=1;j<k;j++){
           cout<<f[i][j];
       }
       cout<<endl;
   }
}
