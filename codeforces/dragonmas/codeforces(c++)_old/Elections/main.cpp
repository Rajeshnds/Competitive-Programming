#include<bits/stdc++.h>
using namespace std;
int n,m,a,l,k;
int winner(int n,int m){
    int b[n+1]={0};
    for(int i=1;i<=m;i++){
        l=-1;
        for(int j=1;j<=n;j++){
            cin>>a;
            if(a>l)l=a,k=j;
        }
        b[k]++;
    }
    m=0;l=0;
    for(int i=1;i<=n;i++)if(b[i]>m)m=b[i],l=i;
    return l;
}
int main(){
    cin>>n>>m;cout<<winner(n,m);
}
