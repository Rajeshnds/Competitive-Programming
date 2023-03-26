#include<bits/stdc++.h>
using namespace std;
int n,m,k,b[101],d[101],a[101],l,x=101,j;
int main(){
    cin>>n>>m>>k;
    for(int i=1;i<=m;i++)cin>>d[i];
    for(int i=1;i<=k;i++)cin>>b[i];
    for(int i=1;i<=m;i++){
        l=0;
        for(int j=1;j<=k;j++){
            if(b[j]%d[i]==0)l++;
        }
        if(l==x){
            a[j++]=i;
        }
        else if(l<x){
            x=l;
            j=0;
            a[j++]=i;
        }
    }
    cout<<j<<endl;
    for(int i=0;i<j;i++)cout<<a[i]<<" ";
}