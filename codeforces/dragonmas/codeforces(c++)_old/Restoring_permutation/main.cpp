#include<bits/stdc++.h>
using namespace std;
int t,n,b[101],f,l;
void read(int c[],int d[]){
    cin>>n;
    l=1;
    for(int i=0;i<n;i++)cin>>b[i],c[b[i]]=1,d[b[i]]=1;
}
void solve(int c[],int d[]){
    for(int i=0;i<n;i++){
        f=0;
        for(int j=1;j<=2*n;j++){
            if(j>b[i]&&c[j]==0){
                f=1;
                c[j]=1;
                break;
            }
        }
        if(!f)l=0;
    }
    if(!l)cout<<-1;
    else{
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
            for(int j=1;j<=2*n;j++){
                if(j>b[i]&&d[j]==0){
                    cout<<j<<" ";
                    d[j]=1;
                    break;
                }
            }
        }
    }
}
int main(){
    cin>>t;
    while(t--){
        int c[202]={0},d[202]={0};
        read(c,d);
        solve(c,d);
        cout<<endl;
    }
}
