#include<bits/stdc++.h>
using namespace std;
#define myfor(i,a,n) for(int i=a;i<=n;i++)
int m,n,b[101][101],a[101][101],c[101][101];
int main(){
    cin>>m>>n;
    myfor(i,1,m)myfor(j,1,n)cin>>b[i][j],a[i][j]=1;
    myfor(i,1,m){
        myfor(j,1,n){
           if(b[i][j]==0){
               myfor(k,1,m)a[k][j]=0;
               myfor(k,1,n)a[i][k]=0;
           }
        }
    }
    myfor(i,1,m){
        myfor(j,1,n){
            if(a[i][j]==1){
                myfor(k,1,m)c[k][j]=1;
                myfor(k,1,n)c[i][k]=1;
            }
        }
    }
    myfor(i,1,m)myfor(j,1,n)if(b[i][j]!=c[i][j])return cout<<"NO",0;
    cout<<"YES"<<endl;
    myfor(i,1,m){
        myfor(j,1,n){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
