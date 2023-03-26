#include<bits/stdc++.h>
using namespace std;
char a[10][10];
int t;
int main(){
    for(cin>>t;t--;){
        for(int i=1;i<=9;i++){
            for(int j=1;j<=9;j++){
                cin>>a[i][j];
                if(a[i][j]=='2')a[i][j]='1';
            }
        }
        for(int i=1;i<=9;i++,cout<<endl)for(int j=1;j<=9;j++)
            cout<<a[i][j];
    }
}
