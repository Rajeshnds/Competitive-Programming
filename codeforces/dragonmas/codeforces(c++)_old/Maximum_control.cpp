#include<bits/stdc++.h>
using namespace std;
int n,u,v,k;
int path(int n){
    int b[n+1]={0};
    for(int i=1;i<n;i++)cin>>u>>v,b[u]++,b[v]++;
    for(int i=1;i<=n;i++)if(b[i]==1)k++;
    return k;
}
int main(){
    cin>>n;
    cout<<path(n);
}
